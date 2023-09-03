uses math;
var i, n, j : byte;
    a : array[0..101,0..101] of integer;
    f, g : array[0..101,0..101] of int64;
    tmax : int64;
BEGIN
    assign(input,'bai4.inp'); reset(input);
    assign(output,'bai4.out'); rewrite(output);
    readln(n);
    for i:= 1 to n do
        for j:= 1 to i do read(a[i,j]);
    f[1,1]:=a[1,1];
    g[1,1]:=a[1,1];
    for i:= 2 to n do begin
        f[i,1]:= a[i,1] * f[i-1,1];
        g[i,1]:= a[i,1] * g[i-1,1];
        for j:= 2 to i-1 do begin
            f[i,j]:= max(max(f[i-1,j-1]*a[i,j], f[i-1,j]*a[i,j]), max(g[i-1,j-1]*a[i,j], g[i-1,j]*a[i,j]));
            g[i,j]:= min(min(f[i-1,j-1]*a[i,j], f[i-1,j]*a[i,j]), min(g[i-1,j-1]*a[i,j], g[i-1,j]*a[i,j]));
        
        end;
        f[i,i]:=f[i-1,i-1]*a[i,i];
        g[i,i]:=g[i-1,i-1]*a[i,i];
    end;
    tmax := f[n,1];
    for i:= 2 to n do tmax:=max(tmax, f[n][i]);
    write(tmax);
END.
