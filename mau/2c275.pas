function scs(k : integer) : integer;
var s : integer;
begin
    s:=0;
    while k > 0 do begin
        inc(s);
        k:= k div 10;
    end;
    exit(s);
end;
var n, x, t : integer;
BEGIN
    readln(n);
    t:= 0;
    for x:= 1 to n do
        t += scs(x);
    write(t);
END.
