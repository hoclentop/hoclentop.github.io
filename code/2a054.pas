program Bai054;
Var a, d, n, i: integer;
f: Array[1..1000] of integer;
begin
   readln(a, d,n);
   f[1] := a;
   for i:= 2 to n do f[i]:= f[i-1] + d;
    write(f[n]);
end.