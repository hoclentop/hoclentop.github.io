var i, n, j, v, k: integer;
    a : array[1..1000] of integer;
BEGIN
    readln(n);
    for i:= 1 to n do read(a[i]);
    readln(v,k);
    for i:= 0 to k-1 do
        write(a[v+i],' ');
END.