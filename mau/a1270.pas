var n, i : integer;
    a : array[1..1000] of integer;
BEGIN
    readln(n);
    for i:= 1 to n do read(a[i]);
    write(a[1],' ');
    for i:= 2 to n do begin
        if a[i] <= a[i-1] then writeln;
        write(a[i],' ');
    end;
END.
