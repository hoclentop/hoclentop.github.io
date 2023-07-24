var n, k, x : longint;
BEGIN
    readln(n, k);
    x:=1;
    while n>0 do begin 
        if x mod k <> 0 then dec(n);
        inc(x);
    end;
    write(x-1);
END.