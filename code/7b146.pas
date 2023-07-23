program Bai146;
var n,i :integer;
    T : longint;
begin
  readln(n);
  T := 1;
  for i := 1 to n do T := T*i;
  writeln(T)
end.