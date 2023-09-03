uses math;
var d, r, k, i, m, j : integer;
    b : array[0..1000,0..1000] of longint;
    s : ansistring;
    kmax : longint;
BEGIN
    assign(input,'chonqua.inp'); reset(input);
    assign(output,'chonqua.out'); rewrite(output);
    readln(d, r, k);
    fillchar(b, sizeof(b), 0);
    for i:= 1 to d do begin
        readln(s);
        m:=0;
        for j:= 1 to r do begin
            if s[j]='*' then inc(m);
            b[i,j]:= b[i-1,j]+m;
        end;
    end;
    k:=k-2;
    kmax:=0;
    for i:= k to d do
        for j:= k to r do
            kmax:=max(kmax, b[i,j]-b[i-k,j]-b[i,j-k]+b[i-k,j-k]);
    write(kmax);
END.
