uses math;
program Bai0962;
var a,b,c,x,y,z:integer;
begin
  readln(a,b,c);
  x := min(a, min(b,c));
  z := max(a, max(b,c));
  y := a + b + c - x - z;
  write(x, y, z);
end.