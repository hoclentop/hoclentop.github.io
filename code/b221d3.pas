var x, y, z, t, d : int64;
BEGIN
    assign(input,'tbg.inp'); reset(input);
    assign(output,'tbg.out'); rewrite(output);
    readln(x, y, z);
    d:= z*(x-y);
    t:= d div y;
    if d mod y <> 0 then inc(t);
    write(t)
END.
