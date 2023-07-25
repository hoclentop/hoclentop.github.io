program Bai196;
  var n, s, i: integer;
  begin
  readln(n);
  s := 0;
  for i := 1 to n div 2 do 
     if n mod i = 0 then  s:= s +i;
     if s = n then writeln('YES') else write('NO');
end..