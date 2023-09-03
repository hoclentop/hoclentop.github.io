var n,m,k,x,i : longint;
    a, b : array[1..5000] of longint;
    t : integer;
BEGIN
    assign(input,'bai2.inp'); reset(input);
    assign(output,'bai2.out'); rewrite(output);
    readln(n);
    m:=0;
    while not eoln() do begin
        inc(m);
        read(a[m]);
    end;
    readln;
    k:=0;
    while not eoln() do begin
        inc(k);
        read(b[k]);
    end;
    for x:= 1 to n do begin
        t:=0;
        for i:= 1 to m do
            if a[i] = x then  begin
                inc(t);
                break;
            end;
        for i:= 1 to k do
            if b[i] = x then  begin
                inc(t);
                break;
            end;
        if t = 2 then write(x,' ');
    end;
END.
