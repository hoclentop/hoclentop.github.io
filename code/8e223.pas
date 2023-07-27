var a : array[1..10000] of integer;
    n,i, u, v, x, y:integer;
BEGIN
    readln(n);
    for i:= 1 to n do read(a[i]);
    readln(u,v);
    n:=n-(v-u+1);
    for i:= u to n do
        a[i]:=a[i+v+1-u];
    readln(x,y);
    for i:=n downto y do
        a[i+1]:=a[i];
    a[y]:=x*x;
    inc(n);
    inc(n);
    a[n]:=x*x;
    for i:= 1 to n do write(a[i],' ');
END.