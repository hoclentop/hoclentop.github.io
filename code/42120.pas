program Bai120;
var s, p:string;
n, d, c: byte;
begin
readln(s);
s:=s+' ';
n := length(s);
d := 1;
p := '';
for c := 1 to n do 
  if s[c] = ' ' then 
  begin
  if c > d then p := copy(s,d,c - d) + ' ' + p;
  d := c + 1;
  end;
 writeln(p);
end.