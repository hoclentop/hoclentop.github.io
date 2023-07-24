program Bai181;
var n, k, dem, c: integer;
  begin
  readln(n);
  dem := 0;
  while n > 0 do 
    begin
    c := n mod 10;
    if c mod 2 = 0 then dem := dem + 1;
    //if ((n mod 10) mod 2 = 0) then dem := dem + 1;
    n := n div 10;
    end;
  write(dem) ;
 end.