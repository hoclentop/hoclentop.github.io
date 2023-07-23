program Bai153;
var a, n, i:integer;
    k : integer;
    T : longint;
begin
  readln(a,n);
  T := 1;
  For i := 1 to n do  T:= T*a;
  k := T mod 1000; 
  if k < 100 then writeln('0', k) else writeln(k);
  end.