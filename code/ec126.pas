program Bai126;
var a, b, c,d: integer;
procedure Hoan_doi(var x, y:integer);
var tam : integer; 
begin
    tam := x;
    x := y;
    y := tam;
end;
begin
    readln(a, b, c,d);
    if a > b then Hoan_doi(a,b);
    if b > c then Hoan_doi(b,c);
    if c > d then Hoan_doi(c,d);
    if a > b then Hoan_doi(a,b);
    if b > c then Hoan_doi(b,c);
    if c > d then Hoan_doi(c,d);
    if ((a=b) and (a<>c) and (c<>d)) or  ((b=c) and (a<>b) and (c<>d)) 
    or ((c=d) and (c<>b) and (b<>a)) then writeln('YES')
    else writeln('NO');
end.