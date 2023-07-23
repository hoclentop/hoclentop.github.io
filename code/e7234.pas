var i, n, dem: integer;
    a : array[1..1000] of integer;
BEGIN
    readln(n);
    for i:= 1 to n do read(a[i]);
    dem:=0;
    for i:= 1 to n do
        if a[i] mod 2 = 0 then inc(dem);
    write(dem)
END.