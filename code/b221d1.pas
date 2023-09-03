var s1, s2, v1, v2: longint;
    t : double;
BEGIN
    assign(input,'drb.inp'); reset(input);
    assign(output,'drb.out'); rewrite(output);
    readln(s1);
    readln(v1);
    readln(s2);
    readln(v2);
    t:= (s2-s1)/(v1-v2);
    if t<0 then write(-1)
    else write(trunc(t));
END.
