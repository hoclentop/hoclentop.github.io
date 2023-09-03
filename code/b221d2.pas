var s, x : ansistring;
    dem, v, t : longint;
BEGIN
    assign(input,'arn.inp'); reset(input);
    assign(output,'arn.out'); rewrite(output);
    readln(s);
    readln(x);
    t:=length(x);
    dem:=0;
    v:=pos(x, s);
    while v > 0 do begin
        inc(dem);
        delete(s,1, v+t-1);
        v:=pos(x, s);
    end;
    write(dem)
END.
