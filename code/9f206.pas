program Bai206;
  var n,a,dem: longint;
begin
  readln(n);
  dem := 0;
  For a := 1 to trunc(sqrt(n)) do if n mod a = 0 then dem := dem + 1;
  writeln(dem);
end.