rogram Bai225;
  var a : array[1 .. 1000] of integer;
   s, n, i:integer;
begin
  readln(n);
  for i := 1 to n do read(a[i]);
  s := 0;
    for i := 1 to n do s := s + a[i];
     writeln(s);
end.