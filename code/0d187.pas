program Bai187;
var a, b: integer;
  begin
  readln(a, b);
  while a <> b  do if a > b then a := a - b else b := b - a;
  write(a);
  end.