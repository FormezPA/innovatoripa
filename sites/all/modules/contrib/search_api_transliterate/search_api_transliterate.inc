<?php

/**
 * Processor for making searches accents-insensitive.
 */
class SearchApiTransliterate extends SearchApiAbstractProcessor {

  protected function process(&$value) {
    $value = transliteration_get($value, '');
  }

}
