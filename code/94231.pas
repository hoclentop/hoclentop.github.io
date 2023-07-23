var i, n, v, k: integer;
    a : array[1..1000] of integer;
BEGIN
    readln(n);
    for i:= 1 to n do read(a[i]);
    readln(k);
    v:=-1;
    for i:= 1 to n do
        if a[i]=k then begin
            v:=i;
            break;
        end;
    write(v)
END.