program Bai115;
var xA, xB, yA, yB: integer;
begin
  readln(xA, yA);
  readln(xB, yB);
  if xA = xB then   writeln('AB // OY')
    else if yA = yB then   writeln('AB // OX')
    else  writeln('KHONG');
end.