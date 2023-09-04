uses math;
var l, r : int64;
    p : array[0..1000000] of longint;
    x, y, i, a, b : longint;
    T : array[1..11] of integer = (2, 4, 6, 10, 12, 16, 18, 22, 28, 30, 36);
    dem : longint;
BEGIN
    readln(l, r);
    filldword(p, 1000001, 1);
    p[0]:= 0;
    p[1]:=0;
    for x:= 2 to 1000 do
        for y:= x to 1000000 div x do
            p[x*y]:=0;
    for i:= 2 to 1000000 do p[i] += p[i-1];
    dem:=0;
    for i:= 1 to 11 do begin
        y:=t[i];
        b:=trunc(power(r, 1.0/y));
        a:=trunc(power(l-1,1.0/y));
        dem+=p[b]-p[a];
        writeln(y, ' ', a,' ', b, ' ', dem);
    end;
    write(dem);
END.
