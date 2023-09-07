var a : array[1..1000] of integer;
    n, i, j, dem : integer;
BEGIN
    readln(n);
    for i:= 1 to n do read(a[i]);
    for i:= 1 to n do begin
        dem:=0;
        for j:= 1 to i do
            if a[i]=a[j] then inc(dem);
        if dem=1 then write(a[i],' ');
    end;
END.
