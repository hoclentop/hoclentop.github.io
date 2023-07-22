program Bai104;
var a, b: real;
x: real;
begin
  readln(a,b);
  if a <> 0 then writeln('Nghiem duy nhat x =   ',-b/a:5:3 )
    else if b <> 0 then writeln('Phuong trinh vo nghiem') else 
  writeln ('Nghiem voi moi x');
end.