program Bai106;
var xA, xB, xC, yA, yB, yC: real;
d1, d2, d3: real;
function bangnhau(a,b: real): Boolean;
begin 
exit (abs(a-b)<=0.00001)
end;
begin
  readln(xA, yA, xB, yB, xC, yC);
  d1 := sqrt(sqr(xB -xA) + sqr(yB-yA));
  d2 := sqrt(sqr(xC -xB) + sqr(yC-yB));
  d3 := sqrt(sqr(xC -xA) + sqr(yC-yA));
  //write(d1:5:2,'  ', d2:5:2, '  ' , d3:5:2);
    if bangnhau(d1 + d2,d3) or bangnhau(d1 + d3,d2) or bangnhau(d3 + d2, d1) then writeln('YES')
    else  writeln('NO'); 
end.