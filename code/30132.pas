Program Bai132;
var n, c, d :integer;
begin
  readln(n);
  d := n mod 10;
  while n > 0 do 
    begin
      c := n mod 10;
      if c <> d then
       begin
        writeln('NO');
        exit;
       end;
       n := n div 10;
	 end;
  writeln ('YES');
end.