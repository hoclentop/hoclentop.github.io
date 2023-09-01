var n, k: longint;
begin
  readln(n);
  k:=trunc(sqrt(n));
  if k*k=n then write('TRUE')
  else write('FALSE')
end.
