var t,n, gmax, s, i, q : longint;
    a: array[1..100000] of longint;
    f: array[1..100001] of int64;
BEGIN
    assign(input,'vni.inp'); reset(input);
    assign(output,'vni.out'); rewrite(output);
    readln(n);
    for i:= 1 to n do read(a[i]);
    gmax:=0;
    s:=0;
    for i:= n downto 1 do begin
        f[i]:=f[i+1];
        if a[i] < gmax then f[i]+= gmax - a[i]
        else gmax:=a[i];
    end;
    readln;
    readln(t);
    for i:= 1 to t do begin
        readln(q);
        writeln(f[q]);
    end;
END.
