function sl(a, n, t : longint) : int64;
var k : longint;
begin
    k:= a div n;
    if t <= a mod n then inc(k);
    exit(k);
end;
var n, a, b, t : longint;
    dem : int64;
BEGIN
    assign(input,'new.inp'); reset(input);
    assign(output,'new.out'); rewrite(output);
    readln(n, a, b);
    dem:= -1;
    for t:= 0 to n-1 do 
        dem:=dem + sl(a, n, t) * sl(b, n, (n-t) mod n);
    write(dem);
END.
