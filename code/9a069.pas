program Bai069;
var a,b,x, min: integer;
begin
  readln(a, b);
  min := a;
  if b < a then min:= b;
   for x:= 1 to min do if((a mod x = 0) and (b mod x = 0)) then write(x);
end.