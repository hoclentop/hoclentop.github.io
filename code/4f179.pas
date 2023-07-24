program Bai179;
var n, k: integer;
    dem, i: byte; 
  begin
  readln(n);
  dem := 0;
  while n > 0 do 
    begin
    dem := dem + 1;
    n := n div 10;
    end;
  write(dem) ;
 end.