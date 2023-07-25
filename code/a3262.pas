var a : array[1..10000] of integer;
    n, i, v, d, dmax : integer;
BEGIN
    readln(n);
    for i:= 1 to n do read(a[i]);
    for i:= 1 to n do begin
        if a[i] mod 2 = 0 then begin
            inc(d);
            if d>dmax then begin
                dmax:=d;
                v:=i-d+1;
            end;
        end
        else
            d:=0;
    end;
    for i:= 0 to dmax-1 do
        write(a[i+v],' ');
END.