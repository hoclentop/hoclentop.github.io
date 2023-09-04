function lascp(n : integer) : boolean;
var k : integer;
begin
    k:= trunc(sqrt(n));
    exit(k*k=n)
end;
var n : int64;
    s : integer;
BEGIN
    assign(input,'cau2a.inp'); reset(input);
    assign(output,'cau2a.out'); rewrite(output);
    readln(n);
    s:=0;
    while n > 0 do begin
        s+= n mod 10;
        n:= n div 10;
    end;
    if lascp(s) then write(s)
    else write(s mod 11);
END.
