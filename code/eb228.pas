var i, n, sln: integer;
    a : array[1..1000] of integer;
BEGIN
    readln(n);
    for i:= 1 to n do read(a[i]);
    sln:=a[1];
    for i:= 1 to n do
        if a[i] > sln then
            sln:=a[i];
    write(sln)
END.