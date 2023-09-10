var a, b, r : longint;
BEGIN
    readln(a, b);
    while b>0 do begin
        r:= a mod b;
        a:= b;
        b:= r;
    end;
    write(a)
END.
