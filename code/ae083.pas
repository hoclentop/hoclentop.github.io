program Bai083;
var xA, xB, xC, yA, yB, yC, xD, yD, a, b, c, d,e: real;
s, s1,s2, p1, p2: real;
begin
  readln(xA, yA);
  readln(xB, yB);
  readln(xC, yC);
  readln(xD, yD);
  a := sqrt(sqr(xC - xB) + sqr(yC - yB));
  b := sqrt(sqr(xC - xA) + sqr(yC - yA));
  c := sqrt(sqr(xB - xA) + sqr(yB - yA));
  d := sqrt(sqr(xD - xA) + sqr(yD - yA));
  e := sqrt(sqr(xC - xD) + sqr(yC - yD));
  p1 := (a + b + c) / 2;
  p2 := ( b + d + e) / 2;
  S1:= sqrt(p1*(p1-a)*(p1-b)*(p1-c));
  S2:= sqrt(p2*(p2-b)*(p2-d)*(p2-e));
  s := s1 + s2;
  write(s :5:1);
end.