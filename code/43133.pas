program Bai133;
var n, c :integer;
begin
  readln(n);
  while n > 0 do 
    begin
      c := n mod 10;
      if c mod 2 = 0 then 
      begin
        writeln('NO');
        exit;
      end;
       n := n div 10;
    end;
  writeln ('YES');
end.