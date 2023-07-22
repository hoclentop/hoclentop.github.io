program Bai093;
var a, c: real;
    b, d, e: integer;
begin
    readln(a);
    b:= trunc(a);
    c:= (a-b)*60;
    d:= trunc(c);
    e := round((c - d) *60);
    write(b, '  ', d, '  ', e);
end.