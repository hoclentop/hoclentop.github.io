var a,b,c,d,i : longint;
BEGIN
    readln(a, b);
    c:= 1;
    for i:= 1 to b do
        c:=c*a;
    d:=0;
    while c>0 do begin
        inc(d);
        c:=c div 10;
    end;
    write(d);
END.