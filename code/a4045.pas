program Bai45;
Var n,i, k, dem: integer;
begin
   readln(n);
   dem := 0;
   k:= trunc(sqrt(n));
  for i:= 0 to k do if (i*i <= n) then    dem := dem +1;
    writeln(dem );
end.