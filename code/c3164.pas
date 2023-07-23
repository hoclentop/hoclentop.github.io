program Bai164;
var a,n, i: integer;
    T: longint;
begin
  readln(a, n);
  T := 1;
  for i := 1 to n do T := T*a;
  writeln(T mod 10);
end.