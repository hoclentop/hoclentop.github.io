program Bai165;
var n: integer;
begin
  readln(n);
  n:= n div 100 *10 + n mod 10;
  writeln(n);
end.