program Bai118;
var n, k :integer;
begin
readln(n, k);
  if n mod k = 0  then writeln(0)
    else     writeln(k - (n mod k));
end.