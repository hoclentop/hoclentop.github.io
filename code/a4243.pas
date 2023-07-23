var i, n, m, j: integer;
    a : array[1..100,1..100] of integer;
BEGIN
    readln(m,n);
    for i:= 1 to m do
        for j:= 1 to n do read(a[i,j]);
    for j:= 1 to n do begin
        for i:= 1 to m do
            write(a[i,j],' ');
        writeln;
    end;
END.