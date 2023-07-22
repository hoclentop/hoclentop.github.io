Program Bai100;
var n, d: integer;
begin
  readln(n);
  d := n mod 100;
  if d < 10 then write(0) else 
  write(d);
end.