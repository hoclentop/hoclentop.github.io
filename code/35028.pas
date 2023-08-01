var a,b,c,d:integer;
    s:real;
BEGIN
    readln(a,b,c,d);
    s:=sqrt((a-c)*(a-c)+(b-d)*(b-d));
    writeln(s:0:3);
END.