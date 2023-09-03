var a:array[0..30] of longint;
        i,j,n,k,dem:longint;
function socach(n:byte; k: longint):longint;
begin
    if n = 0 then
        if k = 0 then exit(1)
        else exit(0);
    exit(socach(n-1,k) + socach(n-1, k-a[n]))
end;
begin
        assign(input,'GROUP.INP'); reset(input);
        assign(output,'GROUP.OUT'); rewrite(output);
        readln(n,k);
        for i:=1 to n do read(a[i]); 
        dem:= socach(n,k);
        if k = 0 then dec(dem);
        write(dem);
end.
