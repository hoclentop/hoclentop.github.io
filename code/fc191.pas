program Bai191;
  var n, i : integer;
  begin
  readln(n);
  for i := 1 to n do if n mod i = 0 then
  writeln (i, '  ');
end.