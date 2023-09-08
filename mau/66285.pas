var a : array[1..1000] of integer;
    i, n, u, v, t : integer;
BEGIN
    readln(n);
    for i:= 1 to n do read(a[i]);
    readln(u, v);
    for i:= 0 to (v-u-1) div 2 do begin
        t:= a[u+i];
        a[u+i]:=a[v-i];
        a[v-i]:= t;
    end;
    for i:= 1 to n do write(a[i], ' ');
END.
