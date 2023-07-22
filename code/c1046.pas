program Bai46;
Var n: integer;
begin
   readln(n);
   while n mod 2 = 0 do n:= n div 2;
   if n = 1 then writeln('Yes') else  writeln('No');
end.