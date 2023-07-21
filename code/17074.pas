program Bai074;
var n, k, b: integer;
begin
  readln(n, k);
  b := k;
  while b <= n do
    begin
    write(b);
    b := b+k;
    end;
end.