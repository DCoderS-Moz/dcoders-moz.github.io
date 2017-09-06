var apid;
function adft() {
    $('#ch').css('padding-top',$('nav').height()+"px");
    $('.content').css('padding-bottom',$('.footer').height()+"px");
    $(".button-collapse").sideNav({closeOnClick: true});
    $('.h-fix').matchHeight();
    $('.carousel-item').css('padding-top', ($('.carousel-fixed').height()+50)+"px");
}
$(window).resize(function () {
    adft();
});
$(document).ready(function () {
    adft();
    $('#nav-desktop').localScroll({duration:600});
    $('#nav-mobile').localScroll({duration:600});
    $('.carousel.carousel-slider').carousel({
        fullWidth: true,
        indicators: true,
        onCycleTo: function($ci,dg){
            stap();
            sap($('.carousel.carousel-slider'));
        }
    });
});
function sap($cr){
    apid = setInterval(function () {
        $cr.carousel('next');
    },5000);
}
function stap(){
    if(apid)
        clearInterval(apid);
}
