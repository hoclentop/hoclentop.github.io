program Bai180;
var n, s: integer;
  begin
  readln(n);
  s := 0;
  while n > 0 do 
    begin
    s := s  +  n mod 10;
    n := n div 10;
    end;
  write(s) ;
 end.