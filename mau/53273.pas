function ucln(a, b: integer) : integer;
var r : integer;
begin
    while b <> 0 do begin
        r := a mod b;
        a := b;
        b := r;
    end;
    exit(a)
end;
var a, b, c: integer;
    d, e : integer;
BEGIN
    readln(a, b, c);
    d:= ucln(a, b);
    e:= ucln(c, d);
    write(e);
END.
