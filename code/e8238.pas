var i, n, dem, j: integer;
    a : array[1..1000] of integer;
BEGIN
    readln(n);
    for i:= 1 to n do read(a[i]);
    dem:=0;
    for i:= 1 to n-1 do 
        for j:= i+1 to n do
            if a[j]=a[i] then inc(dem);
    writeln(dem);
END.