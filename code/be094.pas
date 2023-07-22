rogram Bai094;
var a,b, c, d, max: integer;
begin
  readln(a, b, c, d);
  max:= a;
  if b > max then max := b else 
   if c > max then max :=  c  else max := d;
  write(max);
end.