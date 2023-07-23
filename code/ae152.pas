program Bai152;
var n,i:integer;
f : array[1..200] of longint;
begin
  readln(n);
  F[1]:= 1;
  F[2] := 2;
  For i := 3 to n do  F[i]:= F[i-1] + 2*F[i-2];
  write(F[n]);
  end.