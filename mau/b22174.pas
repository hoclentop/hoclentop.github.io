var a, b, c : array[1..10000] of longint;
    m, n, p, i, j : integer;
    t, dem : int64;
    d : array[0..9] of integer;
    s : array[1..1000000] of integer;
function cuoi(x : longint): byte;
begin
    exit(x mod 10)
end;
function dau(x : longint):byte;
begin
    while x > 9 do x:= x div 10;
    exit(x);
end;
BEGIN
    readln(m, n, p);
    for i:= 1 to m do read(a[i]);
    for i:= 1 to n do read(b[i]);
    for i:= 1 to p do read(c[i]);
    fillchar(d, sizeof(d), 0);
    fillchar(s, sizeof(s), 0);
    for i:= 1 to p do begin
        inc(d[dau(c[i])]);
        inc(s[c[i]]);
    end;
    dem:=0;
    t:=0;
    for i:= 1 to m do
        for j:= 1 to n do
            if (a[i]<>b[j]) and (cuoi(a[i])=dau(b[j])) then
            begin
                t:= d[cuoi(b[j])];
                if dau(b[j]) = cuoi(b[j]) then t:=t-s[b[j]];
                if dau(a[i]) = cuoi(b[j]) then t:=t-s[a[i]];
                dem:= dem+t;
            end;
    write(dem);
END.
    
