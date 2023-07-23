var i, n, j, dem: integer;
    a : array[1..1000] of integer;
BEGIN
    readln(n);
    for i:= 1 to n do read(a[i]);
    dem:=0;
    for i:= 1 to n-1 do
        for j:= i+1 to n do
            if a[i]=a[j] then inc(dem);
    write(dem);
END.