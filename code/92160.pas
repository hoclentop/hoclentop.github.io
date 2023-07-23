program Bai160;
var s : string;
    i : byte;
    U, D, L, R : char;
    x, y : integer;
begin
  readln(x,y);
  readln(s);
  for i := 1 to length(s) do
  begin
    if s[i] = 'U' then  y := y + 1;
    if s[i] = 'R' then  x := x + 1;
    if s[i] = 'L' then  x := x - 1;
    if s[i] = 'D' then  y := y - 1;
  end;
  writeln(x,'  ', y);
end.
