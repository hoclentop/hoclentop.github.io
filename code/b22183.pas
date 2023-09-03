var f : array[1..1000000] of longint;
    i,k,n : longint;
BEGIN
    assign(input,'bai3.inp'); reset(input);
    assign(output,'bai3.out'); rewrite(output);
    readln(n);
    f[1]:=1;
    f[2]:=1;
    k:=2;
    while f[k] < n do begin
        inc(k);
        f[k]:=f[k-1]+f[k-2];
    end;
    for i:= k downto 1 do
        if f[i]<=n then begin
            write(f[i],' ');
            n:= n - f[i];
        end;
END.
