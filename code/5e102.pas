Program Bai102;
var n, dem, c: integer;
begin
  readln(n);
  dem := 0;
  while n > 0 do 
    begin
    c := n mod 10;
    if c = 0 then dem := dem + 1;
    n := n div 10;
    end;
  write(dem);
end.