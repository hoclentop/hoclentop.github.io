program Bai148;
var n, x :integer;
    T : longint;
begin
  readln(n);
  T := 1;
  x := n;
  while x > 1 do
    begin
    T := T*x;
    x := x - 2;
    end;
  writeln(T);
end.