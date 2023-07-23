var i, n, s: integer;
    a : array[1..1000] of integer;
BEGIN
    readln(n);
    for i:= 1 to n do read(a[i]);
    s:=0;
    for i:= 1 to n do
        if a[i] mod 2 = 1 then
            inc(s,a[i]);
    write(s)
END.