program Bai193;
  var n, i, dem : integer;
  begin
  readln(n);
  dem := 0;
  for i := 1 to n do if n mod i = 0 then dem := dem +1; 
  writeln (dem);
end.