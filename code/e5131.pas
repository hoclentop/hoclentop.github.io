program Bai131;
var n, a, b, c :integer;
begin
  readln(n);
  a := n div 100;
  b := n div 10 mod 10;
  c := n mod 10;
  if (a < b) and (b < c) then writeln('YES')
  else
  writeln ('NO');
end.