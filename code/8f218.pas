program Bai218;
var a:array[1..1000] of integer;
    i, n, dem: integer;
begin
  readln(n);
  for i := 1 to n do read(a[i]);
  dem := 0;
  for i := 1 to n do 
        if a[i] mod 40 = 0 then dem := dem +1;
        write(dem);
end.