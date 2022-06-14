var ndung = "hoclen.top";
var url="";
$(document).ready(function(){
   setTimeout(addCredit,100);
   setTimeout(hienAnh,50000);
   setTimeout(hienQC,5000);
   url=$(location).attr("href");
});


function hienAnh(){
   $("#imgheader").toggle();
   setTimeout(hienAnh, 30000);
}
function addCredit() {
   $("p").each(function(){
      if (parseInt(Math.random()*1000)%11==0) {
         $(this).append(" <span class='gthieu'>#"+url+"</span>");
      }
   });
   $("li").each(function(){
      if (parseInt(Math.random()*1000)%11==0) {
         $(this).append(" <span class='gthieu'>#"+url+"</span>");
      }
   });
}
function hienQC(){
   if ($("#quangcao").length>0)
   {
      var i = Math.floor(Math.random() * 10000000)%9 + 1;
      $("#quangcao").attr("src","../qc/qc"+i+".html");
   }
   setTimeout(hienQC,300000);
}
