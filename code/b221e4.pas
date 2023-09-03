var n, i, j, s, smax, v, d : longint;
    a : array[1..1000] of longint;
BEGIN
    assign(input,'tong.inp'); reset(input);
    assign(output,'tong.out'); rewrite(output);
    readln(n);
    for i:= 1 to n do read(a[i]);
    smax:= trunc(-1e9);
    for i:= 1 to n do begin
        s:=0;
        for j:= i to n do begin
            s+=a[j];
            if s > smax then begin
                smax:=s;
                v:=i;
                d:=j-i+1;
            end;
        end;
    end;
    writeln(smax);
    writeln(v);
    writeln(d);
END.
