program Bai099;
var a, b, i: integer;
dem : integer;
begin
  readln(a, b);
  dem := 0;
  for i :=  1 to b do if (i*i > a) and (i*i < b ) then dem := dem + 1;
    write(dem);
end.