program Bai060;
var a, b: char;
k: byte;
begin
  readln(a, b);
  k := ord(b) - ord(a) - 1;
  writeln(k);
end.