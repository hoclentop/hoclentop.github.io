var i, n, dem, k: integer;
    a : array[1..1000] of integer;
BEGIN
    readln(n);
    for i:= 1 to n do read(a[i]);
    readln(k);
    dem:=0;
    for i:= 1 to n do
        if a[i]=k then inc(dem);
    write(dem)
END.