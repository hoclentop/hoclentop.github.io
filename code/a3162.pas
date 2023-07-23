program Bai162;
var c: char;
    n, v, y: byte;
begin
  readln(c, n);
  v := ord(c) - 65;
  y  := (v + n) mod 26;
  writeln(char(y + 65));
end.