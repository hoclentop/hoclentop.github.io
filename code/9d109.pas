program Bai109;
var x1, x2, x3, x4, y1, y2, y3, y4: real;
kt:boolean;
begin
  readln(x1, y1);
  readln(x2, y2);
  readln(x3, y3);
  readln(x4, y4);
  if ((x1 = x2) and (x3 = x4)) or ((x1 = x3) and (x2 = x4))
   or ((x1 = x4) and (x2 = x3)) and ((y1 = y2) and (y3 = y4)) or ((y1 = y3) and (y2 = y4))
   or ((y1 = y4) and (y2 = y3)) then writeln(' YES ') else write('NO');
end.