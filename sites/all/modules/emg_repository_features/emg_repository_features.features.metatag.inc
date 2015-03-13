<?php
/**
 * @file
 * emg_repository_features.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function emg_repository_features_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: global.
  $config['global'] = array(
    'instance' => 'global',
    'config' => array(
      'title' => array(
        'value' => '[current-page:title] | [site:name]',
      ),
      'generator' => array(
        'value' => 'Drupal 7 (http://drupal.org)',
      ),
      'canonical' => array(
        'value' => '[current-page:url:absolute]',
      ),
      'shortlink' => array(
        'value' => '[current-page:url:unaliased]',
      ),
      'dcterms.format' => array(
        'value' => 'text/html',
      ),
      'dcterms.identifier' => array(
        'value' => '[current-page:url:absolute]',
      ),
      'dcterms.title' => array(
        'value' => '[current-page:title]',
      ),
      'dcterms.type' => array(
        'value' => 'Text',
      ),
      'itemprop:name' => array(
        'value' => '[current-page:title]',
      ),
      'og:site_name' => array(
        'value' => '[site:name]',
      ),
      'og:title' => array(
        'value' => '[current-page:title]',
      ),
      'og:type' => array(
        'value' => 'article',
      ),
      'og:url' => array(
        'value' => '[current-page:url:absolute]',
      ),
      'twitter:card' => array(
        'value' => 'summary',
      ),
      'twitter:title' => array(
        'value' => '[current-page:title]',
      ),
      'twitter:url' => array(
        'value' => '[current-page:url:absolute]',
      ),
    ),
  );

  // Exported Metatag config instance: global:403.
  $config['global:403'] = array(
    'instance' => 'global:403',
    'config' => array(
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'shortlink' => array(
        'value' => '[site:url]',
      ),
      'dcterms.identifier' => array(
        'value' => '[site:url]',
      ),
      'dcterms.title' => array(
        'value' => '[site:name]',
      ),
      'itemprop:name' => array(
        'value' => '[current-page:title]',
      ),
      'og:title' => array(
        'value' => '[site:name]',
      ),
      'og:type' => array(
        'value' => 'website',
      ),
      'og:url' => array(
        'value' => '[site:url]',
      ),
      'twitter:title' => array(
        'value' => '[site:name]',
      ),
      'twitter:url' => array(
        'value' => '[site:url]',
      ),
    ),
  );

  // Exported Metatag config instance: global:404.
  $config['global:404'] = array(
    'instance' => 'global:404',
    'config' => array(
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'shortlink' => array(
        'value' => '[site:url]',
      ),
      'dcterms.identifier' => array(
        'value' => '[site:url]',
      ),
      'dcterms.title' => array(
        'value' => '[site:name]',
      ),
      'itemprop:name' => array(
        'value' => '[current-page:title]',
      ),
      'og:title' => array(
        'value' => '[site:name]',
      ),
      'og:type' => array(
        'value' => 'website',
      ),
      'og:url' => array(
        'value' => '[site:url]',
      ),
      'twitter:title' => array(
        'value' => '[site:name]',
      ),
      'twitter:url' => array(
        'value' => '[site:url]',
      ),
    ),
  );

  // Exported Metatag config instance: global:frontpage.
  $config['global:frontpage'] = array(
    'instance' => 'global:frontpage',
    'config' => array(
      'title' => array(
        'value' => '[site:name]',
      ),
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'shortlink' => array(
        'value' => '[site:url]',
      ),
      'dcterms.description' => array(
        'value' => '[site:slogan]',
      ),
      'dcterms.identifier' => array(
        'value' => '[site:url]',
      ),
      'dcterms.title' => array(
        'value' => '[site:name]',
      ),
      'itemprop:name' => array(
        'value' => '[current-page:title]',
      ),
      'og:description' => array(
        'value' => '[site:slogan]',
      ),
      'og:title' => array(
        'value' => '[site:name]',
      ),
      'og:type' => array(
        'value' => 'website',
      ),
      'og:url' => array(
        'value' => '[site:url]',
      ),
      'twitter:description' => array(
        'value' => '[site:slogan]',
      ),
      'twitter:title' => array(
        'value' => '[site:name]',
      ),
      'twitter:url' => array(
        'value' => '[site:url]',
      ),
    ),
  );

  // Exported Metatag config instance: node.
  $config['node'] = array(
    'instance' => 'node',
    'config' => array(
      'title' => array(
        'value' => '[node:title] | [site:name]',
      ),
      'description' => array(
        'value' => '[node:summary]',
      ),
      'abstract' => array(
        'value' => '[node:summary]',
      ),
      'keywords' => array(
        'value' => '[node:field_tags]',
      ),
      'news_keywords' => array(
        'value' => '[node:field_tags]',
      ),
      'dcterms.title' => array(
        'value' => '[node:title]',
      ),
      'dcterms.creator' => array(
        'value' => '[node:author]',
      ),
      'dcterms.description' => array(
        'value' => '[node:summary]',
      ),
      'dcterms.date' => array(
        'value' => '[node:created:custom:Y-m-d\\TH:iP]',
      ),
      'dcterms.modified' => array(
        'value' => '[node:changed:custom:Y-m-d\\TH:iP]',
      ),
      'dcterms.language' => array(
        'value' => '[node:language]',
      ),
      'itemtype' => array(
        'value' => 'Article',
      ),
      'itemprop:description' => array(
        'value' => '[node:summary]',
      ),
      'itemprop:image' => array(
        'value' => '[node:field_image]',
      ),
      'og:title' => array(
        'value' => '[node:title]',
      ),
      'og:description' => array(
        'value' => '[node:summary]',
      ),
      'og:updated_time' => array(
        'value' => '[node:changed:custom:c]',
      ),
      'og:image' => array(
        'value' => '[node:field_image]',
      ),
      'article:published_time' => array(
        'value' => '[node:created:custom:c]',
      ),
      'article:modified_time' => array(
        'value' => '[node:changed:custom:c]',
      ),
      'video:tag' => array(
        'value' => '[node:field_tags]',
      ),
      'twitter:title' => array(
        'value' => '[node:title]',
      ),
      'twitter:description' => array(
        'value' => '[node:summary]',
      ),
      'twitter:image:src' => array(
        'value' => '[node:field_image]',
      ),
    ),
  );

  // Exported Metatag config instance: taxonomy_term.
  $config['taxonomy_term'] = array(
    'instance' => 'taxonomy_term',
    'config' => array(
      'title' => array(
        'value' => '[term:name] | [site:name]',
      ),
      'description' => array(
        'value' => '[term:description]',
      ),
      'dcterms.description' => array(
        'value' => '[term:description]',
      ),
      'dcterms.title' => array(
        'value' => '[term:name]',
      ),
      'itemprop:description' => array(
        'value' => '[term:description]',
      ),
      'itemprop:name' => array(
        'value' => '[term:name]',
      ),
      'og:description' => array(
        'value' => '[term:description]',
      ),
      'og:title' => array(
        'value' => '[term:name]',
      ),
      'twitter:description' => array(
        'value' => '[term:description]',
      ),
      'twitter:title' => array(
        'value' => '[term:name]',
      ),
    ),
  );

  // Exported Metatag config instance: user.
  $config['user'] = array(
    'instance' => 'user',
    'config' => array(
      'title' => array(
        'value' => '[user:name] | [site:name]',
      ),
      'dcterms.creator' => array(
        'value' => '[user:name]',
      ),
      'dcterms.date' => array(
        'value' => '[user:created:custom:Y-m-d\\TH:iP]',
      ),
      'dcterms.title' => array(
        'value' => '[user:name]',
      ),
      'itemprop:name' => array(
        'value' => '[user:name]',
      ),
      'itemprop:image' => array(
        'value' => '[user:picture:url]',
      ),
      'og:title' => array(
        'value' => '[user:name]',
      ),
      'og:type' => array(
        'value' => 'profile',
      ),
      'profile:username' => array(
        'value' => '[user:name]',
      ),
      'og:image' => array(
        'value' => '[user:picture:url]',
      ),
      'twitter:title' => array(
        'value' => '[user:name]',
      ),
      'twitter:image:src' => array(
        'value' => '[user:picture:url]',
      ),
    ),
  );

  // Exported Metatag config instance: view.
  $config['view'] = array(
    'instance' => 'view',
    'config' => array(
      'title' => array(
        'value' => '[view:title] | [site:name]',
      ),
      'description' => array(
        'value' => '[view:description]',
      ),
      'canonical' => array(
        'value' => '[view:url]',
      ),
    ),
  );

  return $config;
}
