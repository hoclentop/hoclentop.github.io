program Bai185;
var n,i: integer;
    s :real;
  begin
  readln(n);
  s := 1;
  for i := 2 to n do s := s + 1/i;
  write(s:7:5);
  end.