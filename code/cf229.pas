var i, n, v: integer;
    a : array[1..1000] of integer;
BEGIN
    readln(n);
    for i:= 1 to n do read(a[i]);
    v:=1;
    for i:= 2 to n do
        if a[i] < a[v] then
            v:=i;
    write(a[v],' ',v)
END.