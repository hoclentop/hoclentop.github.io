program Bai130;
var n, c, d :byte;
begin
  readln(n);
  d := n mod 10;
  while n > 0 do 
    begin
      c := n mod 10;
      if c <> d then  
      begin
      writeln('YES');
      exit;
      end;
      n := n div 10;
      end;
    writeln('NO');
end.