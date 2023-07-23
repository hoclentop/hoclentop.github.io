program Bai144;
var a, i :byte;
begin
  readln(a);
  for i := 1 to 9 do 
     writeln (a, 'x', i, '=', a*i);
end.