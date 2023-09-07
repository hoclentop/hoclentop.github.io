var a : array[1..1000] of integer;
    n, i, j, dem, k : integer;
BEGIN
    readln(n);
    for i:= 1 to n do read(a[i]);
    for i:= 1 to n do begin
        if a[i] = 0 then continue;
        k:= a[i];
        dem:=0;
        for j:= 1 to n do
            if k=a[j] then begin
                inc(dem);
                a[j]:=0;
            end;
        writeln(k,' ',dem);
    end;
END.
