program bai2dekontum;
var m, n, i, j, x, cmax:integer;
c : Array[1..1000] of integer;
begin
    assign(input,'lonnhat.inp'); reset(input);
    assign(output,'lonnhat.out'); rewrite(output);
    readln(m,n);
    fillchar(c, sizeof(c), 0);
    for i := 1 to m do
        for j := 1 to n do
        begin
            read(x);
            c[j] := x + c[j];
        end;
    cmax := c[1];
    for i := 2 to n do
        if cmax < c[i] then cmax:= c[i];
    writeln(cmax);
end.
