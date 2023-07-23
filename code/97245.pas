var s : string;
    n, dem, smax, i, j, v : integer;
BEGIN
    readln(s);
    n:=length(s);
    smax:=0;
    for i:= 1 to n do begin
        dem:=0;
        for j:= 1 to n do 
            if s[i]=s[j] then inc(dem);
        if dem > smax then begin
            smax:=dem;
            v:=i;
        end;
    end;
    write(s[v],' ',smax)
END.