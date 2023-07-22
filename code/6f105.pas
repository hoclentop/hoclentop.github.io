program Bai105;
var a, b, c: real;
x1, x2, dt: real;
begin
  readln(a,b, c);
  dt := b*b - 4*a*c;
    if dt >= 0 then
     begin
     x1 := (-b + sqrt(dt))/(2*a);
     x2 := (-b - sqrt(dt))/(2*a);
     writeln('Co 2 nghiem x1 =   ',x1:5:3 , '  nghiem x2 =   ',x2:5:3)
     end
    else  writeln('Phuong trinh vo nghiem'); 
end.