var n, i, dmax, d, v : integer;
    a : array[1..1000] of integer;
BEGIN
    readln(n);
    for i:= 1 to n do read(a[i]);
    dmax:=0;
    d:=1;
    for i:= 2 to n do begin
        if a[i] > a[i-1] then inc(d)
        else begin
            if d > dmax then begin
                dmax:=d;
                v:= i-d;
            end;
            d:=1;
        end;
    end;
    if d > dmax then begin
        dmax:=d;
        v:=n+1-d;
    end;
    for i:= v to v+dmax-1 do write(a[i],' ');
END.
