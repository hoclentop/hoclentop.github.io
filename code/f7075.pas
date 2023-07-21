program Bai075;
var a,b, n, i: integer;
begin
  readln(a, b, n);
  for i:= 1 to n do if (i mod a = 0) and (i mod b= 0) then
    write(i, '  ');
end.