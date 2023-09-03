var a, b, s : longint;
BEGIN
    readln(a, b);
    s:=0;
    while b>=1 do begin
        if b mod 2 = 1 then s+=a;
        a*=2;
        b:= b div 2;
    end;
    write(s)
END.
