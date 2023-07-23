program Bai147;
var a,b :integer;
    T : longint;
begin
  readln(a, b);
  T := 1;
  if b = 0 then T := 1;
  for b := 1 to b do T := T*a;
  writeln(T);
end.