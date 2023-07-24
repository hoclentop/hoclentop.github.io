var n,c,d,i : longint;
BEGIN
    readln(n);
    c:= 1;
    for i:= 1 to n do
        c:=c*i;
    d:=0;
    while c>0 do begin
        inc(d);
        c:=c div 10;
    end;
    write(d);
END.