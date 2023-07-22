program Bai121;
var a, b: integer;
begin
readln(a, b);
if (a mod b = 0) or (b mod a = 0) then  writeln('YES')
  else writeln('NO');
end.