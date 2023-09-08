var a : array[1..1000] of integer;
    n, i, k : integer;
    ok : boolean;
BEGIN
    readln(n);
    for i:= 1 to n do read(a[i]);
    for k:= 1 to n do begin
        ok:=true;
        for i:= 1 to n-k do
            if a[i]<>a[i+k] then ok:=false;
        if ok then begin
            write(k);
            break;
        end;
    end;
END.
