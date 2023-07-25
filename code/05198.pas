program Bai198;
  var n, s, n2, c: integer;
begin
  readln(n);
  s := 0;
  n2 := n;
  while n > 0 do 
      begin
      c := n mod 10;
      s := s*10 + c;
      n := n div 10;
      end;
      if s = n2 then writeln('YES') else  write( 'NO');
end.