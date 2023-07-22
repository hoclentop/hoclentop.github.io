program Bai081;
var a,b,c, STP, V: integer;
begin
  readln(a, b, c);
  STP:= 2*(a*b + b*c + c*a);
  V := a*b*c;
  writeln(STP);
  write(V);
end.