var i, n, dem, j,t,k: integer;
    a : array[1..1000] of integer;
BEGIN
    readln(n,k);
    for i:= 1 to n do read(a[i]);
    dem:=0;
    for i:= 1 to n-2 do 
        for j:= i+1 to n-1 do
            for t:= j+1 to n do
                if a[i]+a[j]+a[t]=k then
                    inc(dem);
    writeln(dem);
END.