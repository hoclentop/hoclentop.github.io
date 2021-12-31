$(document).ready(function(){
   setTimeout(addCredit,100);
   setTimeout(hienAnh,30000);
});
var ndung = "hoclen.top";

function hienAnh(){
   $("#imgheader").show();
}
function addCredit() {
   $("p").each(function(){
      if (parseInt(Math.random()*1000)%13==0) {
         $(this).append(" <span class='gthieu'>//"+ndung+"</span>");
      }
   });
   $("li").each(function(){
      if (parseInt(Math.random()*1000)%13==0) {
         $(this).append(" <span class='gthieu'>//"+ndung+"</span>");
      }
   });
}
