program Bai068;
var xA, xB, xC, yA, yB, yC, xD, yD: integer;
begin
  readln(xA, yA);
  readln(xB, yB);
  readln(xC, yC);
  xD:= xA + xC -xB;
  yD:= yA + yC -yB;
  writeln(xD , yD);
end.