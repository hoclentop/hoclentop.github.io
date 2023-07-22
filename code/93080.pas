program Bai080;
var x1, x2, y1, y2: integer;
k : real;
begin
  readln(x1, y1);
  readln(x2, y2);
 k := abs(x2 - x1) + abs(y2 - y1);
 write(k:4:2);
end.