var a : array[1..1000] of integer;
    n, i, j, t : integer;
    ok : boolean;
BEGIN
    readln(n);
    for i:= 1 to n do read(a[i]);
    for i:= 1 to n-1 do
        for j:=i+1 to n do
            if a[i]>a[j] then begin
                t:=a[i];
                a[i]:=a[j];
                a[j]:=t;
            end;
    ok:=true;
    for i:= 1 to n-1 do
        if a[i]+1<>a[i+1] then ok:=false;
    if ok then write('YES')
    else write('NO')
    
END.
