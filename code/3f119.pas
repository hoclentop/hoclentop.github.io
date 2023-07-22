program Bai119;
uses math;
var a, b, c, d:integer;
s: real;
begin
readln(a, b, c);
d := max(a, max(b,c));
s := (a*b*c) /(2*b);
 writeln(s:5:2);
end.