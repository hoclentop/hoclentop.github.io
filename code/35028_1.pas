var a,b,c,d:integer;
    s:real;
BEGIN
    readln(a,b,c,d);
    s:=sqrt(sqr(a-c)+sqr(b-d));
    writeln(s:0:3);
END.