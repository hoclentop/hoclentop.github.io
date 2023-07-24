program Bai186;
var n,i: integer;
    s :integer;
    a :array[1..1000] of integer;
  begin
  readln(n);
  for i := 1 to n do read(a[i]);
  s := 0;
  for i := 1 to n do s := s + i*a[i];
  write(s);
  end.