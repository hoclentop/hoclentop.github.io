var n, x, y, dem, a : longint;
    p : array[1..300000] of boolean;
BEGIN
    assign(input,'cau2b.inp'); reset(input);
    assign(output,'cau2b.out'); rewrite(output);
    readln(n);
    fillchar(p, sizeof(p), 1);
    for x:= 2 to trunc(sqrt(n)) do
        for y:= x to n div x do
            p[x*y]:= false;
    dem:=0;
    for a := 2 to (n-1) div 2 do
        if p[a] and p[n-a] then inc(dem);
    write(dem);
END.
