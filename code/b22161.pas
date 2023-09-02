var n : int64;
    dem, x : longint;
BEGIN
    assign(input,'uocnt.inp'); reset(input);
    assign(output,'uocnt.out'); rewrite(output);
    readln(n);
    dem:=0;
    x:= 2;
    while x*x <= n do begin
        if n mod x = 0 then begin
            inc(dem);
            while n mod x = 0 do n:= n div x;
        end;
        inc(x);
    end;
    if n > 1 then inc(dem);
    writeln(dem);
END.
