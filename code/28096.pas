program Bai096;
var a, b, c, x, y, z, max, min : integer;
begin
  readln(a, b, c);
  max := a;
  if b > a then max := b else max := c;
  z := max;
  min := a;
   if b < min then min := b else min := c;
   x := min;
   y := a + b +c - x - z;
  write(x, '  ', y, '  ', z);
end.