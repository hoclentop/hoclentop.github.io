program Bai149;
var a,b, i, j :integer;
begin
  readln(a,b);
  For i := 1 to b do write('*');
  writeln;
  for j := 1 to a - 1 do
    begin
    write('*');
    for i := 1 to b - 2 do write(' ');
    writeln('*');
    end;
  For i := 1 to b do write('*');
end.