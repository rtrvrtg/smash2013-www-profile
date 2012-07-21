#!/bin/bash

BASEDIR=$(dirname $0)
echo "Preparing SMASH! 2013 site in $BASEDIR."

# Look for Drush.

command -v drush >/dev/null 2>&1 || {
  
  echo >&2 "Can't find Drush! Abort! Abort!";
  exit 1;
  
}

# Test Drush version.
# Needs to be v5.0 or better.
# @TODO: Test for drush make support in older versions.

DRUSH_VERSION=$(drush --version)
echo $DRUSH_VERSION

if [[ ${DRUSH_VERSION:14:15} =~ [5-9] || ${DRUSH_VERSION:14:16} =~ [0-9]{2} ]]; then
  
  echo "Drush version is OK."
  
else
  
  echo "Drush version needs to be at least 5! Abort! Abort!";
  exit 2;
  
fi

# Delete old sites directory

if [ -d $BASEDIR/sites/default ]; then
  read -e -p "Delete old default sites directory (y/n)? " $REPLY
  if [ "$REPLY" == "y" ]; then
    echo "Working..."
    sudo rm -rf $BASEDIR/sites/default
    echo "Old default sites directory deleted."
  fi
fi

# Run Drush Make on makefile.

drush make smash2013ws.make $BASEDIR
MAKE_SUCCESS=$?

if [ "$MAKE_SUCCESS" != "0" ]; then
  
  echo >&2 "Something's wrong with the makefile! Abort! Abort!";
  exit 3;  
  
fi

# Set up profile.

if [ -d $BASEDIR/profiles/smash2013ws ]; then
  rm -rf $BASEDIR/profiles/smash2013ws
fi

mkdir $BASEDIR/profiles/smash2013ws
cp -r $BASEDIR/smash2013ws-profile/* $BASEDIR/profiles/smash2013ws/

# Do we want to run command line installation?

read -e -p "Run command line installation (y/n)? " $REPLY

if [ "$REPLY" == "y" ]; then

  # Get database credentials and run command line installation.
  
  read -e -p "Enter the database name: " DB
  read -e -p "Enter the database type: (mysql)/pgsql/sqlite " -i "mysql" DB_TYPE
  
  if [ "$DB_TYPE" == "sqlite" ]; then
  
    read -e -p "Enter the database path: " -i "sites/default" DB
    DB_URL="$DB_TYPE://$DB_PATH/$DB.sqlite"
    
  else
    
    read -e -p "Enter the database hostname: (localhost) " -i "localhost" DB_HOST
    
    read -e -p "Enter the database user: (root) " -i "root" DB_USER
    read -e -p "Enter the database password: " -i "rootPa55!" DB_PASS
    read -e -p "Enter the database superuser: (root) " -i "root" SU_USER
    read -e -p "Enter the database superuser password: " -i "rootPa55!" SU_PASS
    
    DB_URL="$DB_TYPE://$DB_USER:$DB_PASS@$DB_HOST/$DB"
    
  fi
  
  read -e -p "Enter the admin user name: (admin) " -i "admin" AD_USER
  read -e -p "Enter the admin email address: (it@smash.org.au) " -i "it@smash.org.au" AD_MAIL
  
  echo $DB_URL
  
  if [ "$DB_TYPE" == "sqlite" ]; then
    
    drush site-install smash2013ws --db-url=$DB_URL --account-name=$AD_USER --account-mail=$AD_MAIL --site-mail=$AD_MAIL
    
  else
    
    drush site-install smash2013ws --db-url=$DB_URL --db-su=$SU_USER --db-su-pw=$SU_PASS --account-name=$AD_USER --account-mail=$AD_MAIL --site-mail=$AD_MAIL
    
  fi
  
else
  
  # Just install from web UI.
  
  echo "Ready to install manually."
  
fi
