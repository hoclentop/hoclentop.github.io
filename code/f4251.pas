var a,b,c,p,q:integer;
begin
    readln(a,b,c);
    while not eof do begin
        readln(p,q);
        writeln(abs(a*p+b*q+c)/sqrt(a*a+b*b):0:1);
    end;
end.