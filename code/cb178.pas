program Bai178;
var n, k: integer;
    dem, i: byte; 
  begin
  readln(n);
  k := 0;
  while n > 0 do 
    begin
    k := 10*k + n mod 10;
    n := n div 10;
    end;
    if  k mod 13 = 0 then write('YES') else write('NO') ;
 end.