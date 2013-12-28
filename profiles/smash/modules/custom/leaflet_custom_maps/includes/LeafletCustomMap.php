<?php
/**
 * Leaflet Custom Map class.
 */
class LeafletCustomMap extends Entity {
  protected function defaultLabel() {
    return $this->title;
  }
  protected function defaultUri() {
    return array('path' => 'map/' . $this->identifier());
  }
}
