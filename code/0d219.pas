program Bai219;
var a:array[0..1000] of integer;
    i,j,n: integer;
begin
  readln(n);
  for i := 1 to n do a[i] := 0;
  a[0] := 1;
  writeln('1');
  for i := 1 to n do 
      begin
      for j:= n downto 1 do a[j] := a[j] + a[j-1];
      for j := 0 to i do write(a[j]); 
      writeln;
        end;
end.