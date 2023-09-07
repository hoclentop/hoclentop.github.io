function ucln(a, b : integer) : integer;
var r : integer;
begin
    while b<>0 do begin
        r:= a mod b;
        a := b;
        b:= r;
    end;
    exit(a)
end;
var x,y,z,a,b,c,m,n,d : integer;
BEGIN
    readln(x, a);
    readln(y, b);
    readln(z, c);
    m := x*b*c + y*a*c - z*a*b;
    n := a*b*c;
    d := ucln(m, n);
    write(m div d,' ', n div d);
END.
