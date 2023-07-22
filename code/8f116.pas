program Bai116;
uses math;
var SNN, SLN, a, b, c: integer;
begin
  readln(a, b, c);
  SNN := min(a, min(b,c));
  SLN := max(a, max(b,c));
  writeln(SNN, '  ', SLN);
end.