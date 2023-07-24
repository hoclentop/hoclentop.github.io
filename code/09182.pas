program Bai182;
var n, d, c: integer;
  begin
  readln(n);
  d := 10;
  while n > 0 do 
    begin
    c := n mod 10;
    if c > d  then 
      begin
      write('NO');
      exit;
      end;
    n := n div 10;
    d :=c;
    end;
  write('YES') ;
  end.