(function ($) {
    "use strict";
    var mainApp = {

        main_fun: function () {
            

            // SLIDER SCRIPTS
            $('#carousel-slider').carousel({
                interval: 2000 //TIME IN MILLI SECONDS
            })
           
            //  SCROLL SCRIPT FUNCTION FOR NAVBAR 
            $(function () {
                $('.move-me a').bind('click', function (event) { //just pass move-me in design and start scrolling
                    var $anchor = $(this);
                    $('html, body').stop().animate({
                        scrollTop: $($anchor.attr('href')).offset().top
                    }, 1000, 'easeInOutQuad');
                    event.preventDefault();
                });
            });
            //scrollReveal scripts
            window.scrollReveal = new scrollReveal();

            //REVIEWS SPEED
            $('#reviews').carousel({
                interval: 4000 //TIME IN MILLI SECONDS
            })
            /*====================================
            WRITE YOUR SCRIPTS HERE
            ======================================*/


        },

        initialization: function () {
            mainApp.main_fun();

        }

    }
    // Initializing ///

    $(document).ready(function () {
        mainApp.main_fun();
    });

}(jQuery));
