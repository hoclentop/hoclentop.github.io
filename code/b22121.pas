uses math;
var n, a, b, wmax, x, y : longint;
BEGIN
    readln(n, a, b);
    wmax:=0;
    for x:= 0 to n div a do begin
        y:= (n - x*a) div b;
        wmax := max(wmax, x*a+y*b);
    end;
    writeln(wmax)
END.
