program Bai098;
var n , k: integer;
begin
  readln(n);
  if n mod 3 <> 0 then writeln('Khong the') else
  begin
  k := n div 3;
  write(k - 1, '  ', k, '  ', k + 1);
  end;
end.