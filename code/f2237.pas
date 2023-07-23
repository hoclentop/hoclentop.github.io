var i, n, dmax, k: integer;
    a : array[1..1000] of integer;
BEGIN
    readln(n);
    for i:= 1 to n do read(a[i]);
    readln(k);
    dmax:=-1;
    for i:= 1 to n do
        if (a[i]<=k) and (a[i]>dmax) then
            dmax:=a[i];
    write(dmax)
END.