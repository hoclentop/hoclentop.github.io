var i, n, dem, d, j: integer;
    a : array[1..1000] of integer;
BEGIN
    readln(n);
    for i:= 1 to n do read(a[i]);
    dem:=0;
    for i:= 1 to n do begin
        d:=0;
        for j:= 1 to n do
            if a[j]=a[i] then inc(d);
        if d=1 then inc(dem);
    end;
    writeln(dem);
END.