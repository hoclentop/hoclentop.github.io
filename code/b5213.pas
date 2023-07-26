program Bai213;
var s: string;
    i,j, n: byte;
begin
  readln(s);
  n := length(s);
  j := n;
  for i := 1 to n div 2 do 
      if s[i] <> s[j] then
        begin
        writeln('NO');
        exit;
        end;
      write('YES');
end.