var n, k, x, i, j : longint;
    a : array[1..500000] of longint;
    c : array[0..10000000] of longint;
    dem : int64;
BEGIN
    assign(input,'cau3.inp'); reset(input);
    assign(output,'cau3.out'); rewrite(output);
    readln(n, k);
    for i:= 1 to n do read(a[i]);
    fillchar(c, sizeof(c), 0);
    i:= 1;
    for j:= 1 to n do begin
        x:= a[j];
        inc(c[x]);
        while c[x]=k do begin
            dem += n-j+1;
            dec(c[a[i]]);
            inc(i);
        end;
    end;
    write(dem);
END.
