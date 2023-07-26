var  a:array[1..100,1..100] of integer;
    m, n, i, j, dem, x : integer;
    ok:boolean;
BEGIN
    readln(m,n);
    for i:= 1 to m do
        for j:= 1 to n do read(a[i,j]);
    for i:= 1 to m do
        for j:= 1 to n do begin
            ok:=true;
            for x:= 1 to n do 
                if a[i,j]>a[i,x] then begin
                    ok:=false;
                    break;
                end;
            for x:= 1 to m do 
                if a[i,j]<a[x,j] then begin
                    ok:=false;
                    break;
                end;
            if ok then begin
                writeln(i,' ',j);
                inc(dem);
            end;
        end;
    if dem=0 then write('KHONG CO');
END.