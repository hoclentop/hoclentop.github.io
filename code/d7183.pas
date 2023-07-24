program Bai183;
var n,i, dem: integer;
    s :longint;
  begin
  readln(n);
  s := 1;
  for i := 1 to n do s := s*i;
   dem := 0;
  while s mod 10 = 0 do 
    begin
    dem := dem + 1;
    s := s div 10;
    end;
  write(dem);
  end.