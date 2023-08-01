var a,b,c,p,s:real;
BEGIN
    readln(a,b,c);
    p:=a+b+c;
    writeln(p:0:2);
    p:=p/2;
    s:=sqrt(p*(p-a)*(p-b)*(p-c));
    writeln(s:0:2);
END.