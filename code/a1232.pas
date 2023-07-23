var i, n, dem, smax, j,v: integer;
    a : array[1..1000] of integer;
BEGIN
    readln(n);
    for i:= 1 to n do read(a[i]);
    smax:=0;
    for i:= 1 to n do begin
        dem:=0;
        for j:= 1 to n do
            if a[j]=a[i] then inc(dem);
        if smax<dem then begin
            v:=a[i];
            smax:=dem;
        end;
    end;
    writeln(v,' ',smax);
END.