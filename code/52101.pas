Program Bai101;
var n, k: integer;
begin
  readln(n);
  k := trunc(sqrt(n));
  if (k*k < n) then  k := k + 1;
  write(k*k);
end.