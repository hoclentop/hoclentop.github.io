program Bai172;
  var G:array[1..1000] of string;
  n,i : byte;
begin
  readln(n);
  G[1]:= 'A';
  G[2]:= 'B';
  for i := 3 to n do 
      G[i] := G[i - 2] + G[i -1];
  write(G[n]);
end.