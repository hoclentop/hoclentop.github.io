program Bai051;
Var n, i, s: integer;
begin
   readln(n);
   s := 0;
  For i:= 1 to n do s:= s+i*i*i; 
  write(s);
end.