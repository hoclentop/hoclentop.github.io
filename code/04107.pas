rogram Bai107;
var n, x, y, k, z: longint;
begin
  readln(n);
  For  x :=1 to n do 
    for y:= x + 1 to n do
      begin
      k := x*x + y*y;
      z := trunc(sqrt(k));
      if (z*z = k) and (z <= n) then
      writeln(x,'  ', y, '  ' , z);
    end;
end.