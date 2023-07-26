program Bai223;
    var a :array[1..1000] of integer;
      n, i : integer;
      u, v: integer;
      x, y: integer;
begin
  readln(n);
  for i := 1 to n do read(a[i]);
  readln(u,v);
  readln(x,y);
    n := n -(v - u + 1);
    for i := u to n do a[i] := a[i+ v + 1 - u];
      for i := n downto y do 
      begin
      a[i +1] := a[i];
      a[y] := x*x;
      n := n + 1;
      end;
      a[n]:= x*x;
    for i := 1 to n do write(a[i]:4);
end.