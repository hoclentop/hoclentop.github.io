program Bai082;
var xA, xB, xC, yA, yB, yC, a, b, c: real;
s, p: real;
begin
  readln(xA, yA);
  readln(xB, yB);
  readln(xC, yC);
  a := sqrt(sqr(xC - xB) + sqr(yC - yB));
  b := sqrt(sqr(xC - xA) + sqr(yC - yA));
  c := sqrt(sqr(xB - xA) + sqr(yB - yA));
  p := (a + b + c) / 2;
  S:= sqrt(p*(p-a)*(p-b)*(p-c));
  write(s:5:1);
end.