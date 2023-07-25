program Bai200;
  var n: integer;
      x: integer;
  begin
  readln(n);
    if n < 2 then 
      begin
      write('NO ');
      exit;
      end;
  for x := 2 to n - 1 do 
     if n mod x = 0 then 
      begin
      write('NO');
      exit;
      end;
    write('YES ');
end.