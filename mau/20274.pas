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
function bcnn(a, b : integer): integer;
begin
    exit(a div ucln(a, b) * b)
end;
var a, b, c: integer;
    d, e : integer;
BEGIN
    readln(a, b, c);
    d:= bcnn(a, b);
    e:= bcnn(c, d);
    write(e);
END.
