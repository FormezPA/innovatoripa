/* ---------------------------------------------------------------- */
/* FUNCTIONS LIBRARY                                                */
/* ---------------------------------------------------------------- */
/*
 * jQuery throttle / debounce - v1.1 - 3/7/2010
 * http://benalman.com/projects/jquery-throttle-debounce-plugin/
 * 
 * Copyright (c) 2010 "Cowboy" Ben Alman
 * Dual licensed under the MIT and GPL licenses.
 * http://benalman.com/about/license/
 */
(function(b,c){var $=b.jQuery||b.Cowboy||(b.Cowboy={}),a;$.throttle=a=function(e,f,j,i){var h,d=0;if(typeof f!=="boolean"){i=j;j=f;f=c}function g(){var o=this,m=+new Date()-d,n=arguments;function l(){d=+new Date();j.apply(o,n)}function k(){h=c}if(i&&!h){l()}h&&clearTimeout(h);if(i===c&&m>e){l()}else{if(f!==true){h=setTimeout(i?k:l,i===c?e-m:e)}}}if($.guid){g.guid=j.guid=j.guid||$.guid++}return g};$.debounce=function(d,e,f){return f===c?a(d,e,false):a(d,f,e!==false)}})(this); 

(function ($) {

    /**
     * The recommended way for producing HTML markup through JavaScript is to write
     * theming functions. These are similiar to the theming functions that you might
     * know from 'phptemplate' (the default PHP templating engine used by most
     * Drupal themes including Omega). JavaScript theme functions accept arguments
     * and can be overriden by sub-themes.
     *
     * In most cases, there is no good reason to NOT wrap your markup producing
     * JavaScript in a theme function.
     */
    /*
    Drupal.theme.prototype.innovatori_paExampleButton = function (path, title) {
      // Create an anchor element with jQuery.
      return $('<a href="' + path + '" title="' + title + '">' + title + '</a>');
    };
    */

    /**
     * Behaviors are Drupal's way of applying JavaScript to a page. The advantage
     * of behaviors over simIn short, the advantage of Behaviors over a simple
     * document.ready() lies in how it interacts with content loaded through Ajax.
     * Opposed to the 'document.ready()' event which is only fired once when the
     * page is initially loaded, behaviors get re-executed whenever something is
     * added to the page through Ajax.
     *
     * You can attach as many behaviors as you wish. In fact, instead of overloading
     * a single behavior with multiple, completely unrelated tasks you should create
     * a separate behavior for every separate task.
     *
     * In most cases, there is no good reason to NOT wrap your JavaScript code in a
     * behavior.
     *
     * @param context
     *   The context for which the behavior is being executed. This is either the
     *   full page or a piece of HTML that was just added through Ajax.
     * @param settings
     *   An array of settings (added through drupal_add_js()). Instead of accessing
     *   Drupal.settings directly you should use this because of potential
     *   modifications made by the Ajax callback that also produced 'context'.
     */

    /*
    $(document).ajaxComplete(function() {
        // console.log('ajaxComplete bind event');
    });

    $(document).ajaxSend(function() {
        // console.log('ajaxSend bind event')
    });
    */
   
   
    /* ---------------------------------------------------------------- */
    /* CUSTOM FUNCTIONS                                                 */
    /* ---------------------------------------------------------------- */
   
    // Imposta le voci del menu della comunità in base allo spazio disponibile
    function setCommunityMenu ($community_menu_voices) {
        // console.log($community_menu_voices);
        
        var total_tabs_width = 0;
        // 110 pixel è lo spazio da lasciare al logo della comunità a sinistra 
        // nel caso di risoluzioni > 768px (vedi @media query su navigation.css)
        var padding_left = $(window).width() < 768 ? 5 : 110;
        // console.log ($(window).width(), padding_left);
        // In più c'è da aggiungere dello spazio sufficiente per la voce di menu "+Altro" per cui lascio 72px
        var available_menu_width = $('#block-innovatoripa-og-innovatori-og-comunita-nav').width() - (padding_left + 72);
        // Considero la voce attiva che devo mantenere visbile e sottrarre dallo spazio disponibile
        var $active_tab = $community_menu_voices.find('a.active');
        available_menu_width = available_menu_width - $active_tab.outerWidth();
        
        // Calcolo il numero di voci che vanno collassate
        $community_menu_voices.each( function () {
            // Eseguo l'interazione su tutte le tab ad esclusione di quella attiva
            var $tab = $(this).find('a:not(.active)');
            var tab_width = $tab.outerWidth();
            // console.log ($tab, ' : ', tab_width)
            total_tabs_width = total_tabs_width + tab_width;
            if (total_tabs_width >= available_menu_width) {
                $tab.parent().addClass('is-collapsed');
            }
        })

        // console.log ('total_tabs_width = ', total_tabs_width);
        // console.log ('Available menu width = ', available_menu_width);
        // console.log ('Collapsed voices: ', $community_menu_voices.filter('.is-collapsed'));
        
        // Se il menu non è già stato creato e se vi sono voci che vanno collassate
        if ($('.community-nav_collapsed-menu').size() === 0 && $community_menu_voices.filter('.is-collapsed').size()) {
            var $more_menu_voice = $('<li class="community-nav_menu-more community-nav_menu-leaf"><a href="#">+ Altro</a></li>');
            var $collapsed_menu = $('<ul class="community-nav_collapsed-menu"></ul>');
            $community_menu_voices.filter('.is-collapsed').each(function () {
                $(this).appendTo($collapsed_menu);
            })
            $collapsed_menu.appendTo($more_menu_voice)
            // $community_menu_voices.filter('.is-collapsed').appendTo('.community-nav_collapsed-menu');
            $more_menu_voice.appendTo($('.community-nav_menu'));
        } else {
        // Il menu è già stato creato, procedo quindi ad aggiornarlo

        }
        
        // Interazione su bottone per espandere il menu della comunità
        $('.community-nav_menu-more > a').once().click( function(e) {
            // console.log('CLICK!!');
            $(this).parent().toggleClass('is-open');
            if ($(this).parent().hasClass('is-open')) {
                $('#block-innovatoripa-og-innovatori-og-comunita-nav').addClass('overflow-is-visible');
            } else {
                $('#block-innovatoripa-og-innovatori-og-comunita-nav').removeClass('overflow-is-visible');
            }
            return false;
        })

    }
    
    // Setta la voce attiva nel menu della comunità o del gruppo
    function setActiveMenuLeaf ($body, menu_voices) {
        if (typeof(Drupal.settings.active_entity) === 'object') {


            // console.log(Drupal.settings.active_entity)
            var type = Drupal.settings.active_entity.type;
            var og_type = Drupal.settings.active_entity.og_type;
            var og_id = Drupal.settings.active_entity.og_type;
            var nid = Drupal.settings.active_entity.id;

            $body.addClass('og-context-node-' + og_type);

            // Pagine della comunità
            if (og_type === 'comunita' && type === 'discussione') {
                menu_voices.filter('.discussions-leaf').find('a').addClass('active');
            }

            if (og_type === 'comunita' && type === 'domanda') {
                menu_voices.filter('.questions-leaf').find('a').addClass('active');
            }

            if (og_type === 'comunita' && type === 'book') {
                menu_voices.filter('.wiki-leaf').find('a').addClass('active');
            }

            if (og_type === 'comunita' && type === 'blog') {
                menu_voices.filter('.blog-leaf').find('a').addClass('active');
            }

            if (og_type === 'comunita' && type === 'webform') {
                menu_voices.filter('.webforms-leaf').find('a').addClass('active');
            }
            
            if (og_type === 'comunita' && type === 'book') {
                menu_voices.filter('.wiki-leaf').find('a').addClass('active');
            }
            
            if (og_type === 'comunita' && type === 'segnalazione') {
                menu_voices.filter('.reports-leaf').find('a').addClass('active');
            }

            if (og_type === 'comunita' && type === 'evento') {
                menu_voices.filter('.appointments-leaf').find('a').addClass('active');
            }

            if (og_type === 'comunita' && type === 'poll') {
                menu_voices.filter('.polls-leaf').find('a').addClass('active');
            }

            // Pagine del gruppo
            if (og_type === 'gruppo' && type === 'gruppo' ||
                og_type === 'gruppo' && type === 'discussione') {
                // console.log($('.group-nav_menu-leaf a').eq(0));
                $('.group-nav_menu-leaf a').eq(0).addClass('active');
            }
        } else { // nel caso di pagine "views" l'oggetto di cui sopra non è definito
            if ($body.hasClass('page-node-discussioni-')) {
                // console.log ($community_menu_voices);
                menu_voices.filter('.discussions-leaf').find('a').addClass('active');
            }
        }
    }



    /* ----------------------------------------------------------------
    /* GLOBAL JS
    /* ---------------------------------------------------------------- */
    Drupal.behaviors.innovatoriPA = {
      attach: function (context, settings) {
        // By using the 'context' variable we make sure that our code only runs on
        // the relevant HTML. Furthermore, by using jQuery.once() we make sure that
        // we don't run the same piece of code for an HTML snippet that we already
        // processed previously. By using .once('foo') all processed elements will
        // get tagged with a 'foo-processed' class, causing all future invocations
        // of this behavior to ignore them.

       /*  ----------------------------------------------------------------
        - CACHING
        ---------------------------------------------------------------- */
        // var $window = $(window);
        var $body = $('body');
        var $primary_tabs = $('.tabs.primary', $body);

        /*  ----------------------------------------------------------------
        - Interazione sui commenti
        ---------------------------------------------------------------- */
        $('.teaser__comments', context).once().each( function() {
            $(this).find('.teaser__comments-item').eq(0).addClass('is-active');
        })

        $('.teaser__comments-item-avatar', context).once().click( function() {
            var $clicked_avatar = $(this);
            if (!$clicked_avatar.parent().hasClass('is-active')) {
                $clicked_avatar.closest('.teaser__comments').find('.is-active').removeClass('is-active').addClass('is-hidden');
                $clicked_avatar.parent().addClass('is-active').removeClass('is-hidden');
            }
        });

        /*  ----------------------------------------------------------------
        - Per i dispositivi a bassa risoluzione, c'è un link in cima 
        - che porta ai menu a fondo pagina
        - @TODO aggiungere un link back-to-top a fondo pagina
        ---------------------------------------------------------------- */
        $('#mobile-menu-button').once().click( function() {
            $('html, body').animate({
                 scrollTop: $("#navigation").offset().top
            }, 500);
            
        })

        /*  ----------------------------------------------------------------
        - FIX IE8 e inferiori
        ---------------------------------------------------------------- */
        if ($('html').hasClass('lt-ie9')) {
            $('.block-image-grid-3 .block-list-item').each(function () {
                if (($(this).index() % 3) === 0) $(this).addClass('ie-fix_no-right-margin');
            })
            $('.block-image-grid-4 .block-list-item').each(function () {
                if (($(this).index() % 4) === 0) $(this).addClass('ie-fix_no-right-margin');
            })
            $('.block-image-grid-5 .block-list-item').each(function () {
                if (($(this).index() % 5) === 0) $(this).addClass('ie-fix_no-right-margin');
            })
        }


        /*  ----------------------------------------------------------------
        - Interazione sul menu "Crea contenuto"
        ---------------------------------------------------------------- */
        $('#block-innovatoripa-og-innovatori-og-create-content h2').once().click( function(event) {
            if (event.stopPropagation) { // W3C/addEventListener()
                event.stopPropagation();
            } else { // Older IE.
                event.cancelBubble = true;
            }
            $(this).parent().toggleClass('open');
            $body.toggleClass('create-menu-opened');
        })
        
        $('body').once().click( function() {
            if ($body.hasClass('create-menu-opened')) {
                $('#block-innovatoripa-og-innovatori-og-create-content.open').toggleClass('open');
                $body.toggleClass('create-menu-opened');
                // event.stopPropagation();
            }
        })

        /*  ----------------------------------------------------------------
        - DRUPAL TABS
        ---------------------------------------------------------------- */
        
        if ($primary_tabs.size()) {
            // Sposto il contenuto degli action links nelle tabs
            if ($('.action-links', $body).size()) {
                $('.action-links', $body).find('li').addClass('was-action-links');
                $primary_tabs.append($('.action-links', $body).html());
                $('.action-links', $body).remove();
            }
            // Aggiungo il pulsantino per espandere le primary tabs
            // $primary_tabs.before('<a id="primary-tabs-button" href="#" title="Menu di amministrazione"><img src="' + Drupal.settings.siteURL + '/' + Drupal.settings.themePath + '/images/primary-tabs-bg.png" alt="Mostra le tab di amministrazione" /></a>')
        }


        
        /*  ----------------------------------------------------------------
        - PAGINE PROFILO UTENTE
        ---------------------------------------------------------------- */
        if ($body.hasClass('page-user')) {

            // ----------------
            // Interazione apertura / chiusura sezione altri dettagli
            // ----------------
            if ($('.user-profile-top', $body).size()) {
                var $profile_details = $('.user-profile-details', $body);
                var profile_details_height = $profile_details.height();
                $profile_details.height(0);
                $('.user-profile-footer').once().append('<div class="user-profile-details-switcher clearfix"><span><i class="icon user-details"></i>Mostra più dettagli</span></div>')
                $('.user-profile-details-switcher', $body).once().click( function () {
                    if ($profile_details.hasClass('is-open')) {
                        $profile_details.height(0).removeClass('is-open');
                        $('.user-profile-details-switcher span').html('<i class="icon user-details"></i>Mostra più dettagli')
                    } else {
                        $profile_details.height(profile_details_height).addClass('is-open');
                        $('.user-profile-details-switcher span').html('<i class="icon user-details"></i>Nascondi dettagli')
                    }
                })
            }

            if ($body.hasClass('page-user_public-profile')) {
                // Sposto la posizione del bottone nelle pagine utente profilo pubblico
                if ($('#flag-button').size()) {
                    $('#flag-button').once().prependTo($('.user-profile-footer')).removeClass('element-hidden');
                }
                // Sposto il link per l'invio di un mess privato nella pagina del 
                // profilo pubblico all'interno del titolo h1 (nome utente)
                if ($('.user-profile-top-main h1').size()) {
                    $('.privatemsg-send-link-profile').attr('title', Drupal.t('Invia un messaggio privato all\'utente')).html('<img src="/'+ Drupal.settings.themePath +'/images/mail.png" alt="Invia un messaggio privato all\'utente" />').appendTo('.user-profile-top-main h1');
                }
            }
        
        
        }
        
        
        /*  ----------------------------------------------------------------
        -   PAGINE GRUPPI E COMUNITA'
        ---------------------------------------------------------------- */
        if ($body.hasClass('node-type-comunita') || $body.hasClass('node-type-gruppo') ) {

            // Bottone flag per comunità e gruppi
            // ----------------
            if ($('.community-subscribe, .group-subscribe').size()) {
                var $button_container = $('.community-subscribe, .group-subscribe');
                var $button = $button_container.find('a');
                if ($button.size()) {
                    // Aggiungo un'icona
                    $button.once().prepend('<i class="icon"></i>');
                } else {
                    // non abbiamo un bottone, ma c'è un messaggio di testo (ad es. quando il gruppo è privato)
                    $button_container.removeClass('button').addClass('subscribe-text-message');
                }
            }
            
            // Troncatura testi
            // ----------------
            $('#block-ds-extras-ds-block-community-full, #block-ds-extras-ds-block-group-full').once().find('.field-name-body').expander({
                slicePoint:         500,  // default is 100
                widow:              50,
                // expandPrefix:       '', // default is '... '
                expandText:         '<i class="icon more"></i>Leggi tutto', // default is 'read more'

                // class names for summary element and detail element
                summaryClass:       'summary',
                detailClass:        'details',

                // text to use for the link to re-collapse the text
                userCollapsePrefix: '',
                userCollapseText:   '<i class="icon less"></i>Chiudi',  // default is 'read less'

                // one or more space-separated class names for span around
                // "read-more" link and "read-less" link
                moreClass:          'read-more',
                lessClass:          'read-less',

                // effects for expanding and collapsing
                expandEffect:       'fadeIn',
                expandSpeed:        250,
                collapseEffect:     'fadeOut',
                collapseSpeed:      200,
                collapseTimer:      0, // re-collapses after 5 seconds; default is 0, so no re-collapsing


                // all callback functions have the this keyword mapped to the element in the jQuery set when .expander() is called
                onSlice: null, // function() {},
                beforeExpand: null, // function() {},
                afterExpand: null, // function() {},
                onCollapse: null, // function() {},
                afterCollapse: null // function() {}
            });
        
        }
        
        if ($('.is-collapsible').size()) {
            $('.is-collapsible').once().expander({
                slicePoint:         350,  // default is 100
                widow:              10,
                expandPrefix:       '', // default is '... '
                expandText:         '[...]', // default is 'read more'

                // class names for summary element and detail element
                summaryClass:       'summary',
                detailClass:        'details',

                // text to use for the link to re-collapse the text
                userCollapsePrefix: '',
                userCollapseText:   '[chiudi]',  // default is 'read less'

                // one or more space-separated class names for span around
                // "read-more" link and "read-less" link
                moreClass:          'read-more',
                lessClass:          'read-less',

                // effects for expanding and collapsing
                expandEffect:       'fadeIn',
                expandSpeed:        250,
                collapseEffect:     'fadeOut',
                collapseSpeed:      200,
                collapseTimer:      0, // re-collapses after 5 seconds; default is 0, so no re-collapsing

            });
            
        }
        
        /*  ----------------------------------------------------------------
        - RICERCA A FACCETTE
        ---------------------------------------------------------------- */
        // Il plugin iCheck non può essere utilizzato sulla ricerca a faccette
        // in quanto non supporta la propagazione degli eventi e quindi rompe
        // il funzionamento della stessa.
        
        // Rendo espandibili i blocchetti in sidebar per la ricerca a faccette
        /*
        if ($('.panel-sidebar-search').size()) {
            $('.panel-sidebar-search').find('.pane-block').
        }
        */
        
        
        /*  ----------------------------------------------------------------
        - STILIZZAZIONE DEI RADIO BUTTON NEL TESTO DELLA PAGINA
        ---------------------------------------------------------------- */
        if ($('.poll').size()) {
            $('.poll input').once().iCheck({
                checkboxClass: 'icheckbox_square-aero',
                radioClass: 'iradio_square-aero',
                increaseArea: '20%' // optional
            });
        }
        if ($('.webform-client-form').size()) {
            $('.webform-client-form input').once().iCheck({
                checkboxClass: 'icheckbox_square-aero',
                radioClass: 'iradio_square-aero',
                increaseArea: '20%' // optional
            });
        }
        
        /*  ----------------------------------------------------------------
        - USER LOGIN BUTTON
        ---------------------------------------------------------------- */
        
        if ($body.hasClass('not-logged-in')) {
            $('#login-form-button').once().click( function() {
                $(this).toggleClass('is-pushed');
                $('#block-user-login').toggleClass('is-open');
                
            })
        }
        
        /*  ----------------------------------------------------------------
        - MENU COMUNITA' e GRUPPI
        ---------------------------------------------------------------- */
        if ($('#block-innovatoripa-og-innovatori-og-comunita-nav, #block-innovatoripa-og-innovatori-og-gruppo-nav').size()) {
            // Save the original menu in an object for when I need to rebuild the menu (resize or device rotate)
            var $community_menu_voices = $('.community-nav_menu-leaf');
            Drupal.settings.community_menu_voices = $community_menu_voices.clone();
            
            // $(window).on("redraw",function(){switched=false;setCommunityMenu(Drupal.settings.community_menu_voices);});
            setActiveMenuLeaf($body, $community_menu_voices);
            // Formatta il menu della comunità in base alla larghezza dello schermo
            setCommunityMenu($community_menu_voices);
            
            $(window).on("resize", $.debounce( 250, function() {
                var $updated_community_menu_voices = $('#block-innovatoripa-og-innovatori-og-comunita-nav').find('.community-nav_menu').html(Drupal.settings.community_menu_voices.clone()).find('.community-nav_menu-leaf');
                // $('.community-nav_menu-leaf');
                // Risetto la voce di menu attiva
                setActiveMenuLeaf($body, $updated_community_menu_voices);
                // ricostruisco il menu di navigazione della comunità
                setCommunityMenu($updated_community_menu_voices);
            }));
        }
        
      }
    };

})(jQuery);
