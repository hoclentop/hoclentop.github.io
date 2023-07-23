program Bai150;
var n,i, j :integer;
begin
  readln(n);
  For i := 1 to n do
      begin
      for j := 1 to i do
      write('*');
      writeln;
      end;
end.