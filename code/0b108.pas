program Bai108;
var x1, x2, x3, x4, y1, y2, y3, y4: real;
kt:boolean;
begin
  readln(x1, y1);
  readln(x2, y2);
  readln(x3, y3);
  readln(x4, y4);
  kt := false;
  if (x1 + x2 = x3 + x4) and (y1 + y2 = y3 + y4) then kt := true;
  if (x1 + x3 = x2 + x4) and (y1 + y3 = y2 + y4) then kt := true;
  if (x1 + x4 = x3 + x2) and (y1 + y4 = y3 + y2) then kt := true;
  if kt = true then   writeln(' YES ') else write('NO');
end.