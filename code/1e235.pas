var i, n, dmin: integer;
    a : array[1..1000] of integer;
BEGIN
    readln(n);
    for i:= 1 to n do read(a[i]);
    dmin:=-1;
    for i:= 1 to n do
        if a[i]>0 then begin
            dmin:=a[i];
            break;
        end;
    if dmin>0 then
        for i:= 1 to n do
            if (a[i]>0) and (a[i]<dmin) then
                dmin:=a[i];
    if dmin>0 then write(dmin)
    else write('KHONG CO');
END.