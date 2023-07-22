program Bai123;
var n, i: integer;
    a :Array[1 .. 200] of integer;
begin
readln(n);
for i := 1 to n do read(a[i]);
for i := 2 to n do 
  if a[i]*a[i-1] >= 0 then  
    begin
    writeln('NO');
    exit
    end;
writeln('YES');
end.