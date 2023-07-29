uses math;
var a, b, c, d, k : integer;
procedure hoandoi(var a, b : integer);
var x : integer;
begin
    x:=a; 
    a:=b;
    b:=x;
end;
begin
    readln(a, b, c, d);
    if a>b then hoandoi(a,b);
    if b>c then hoandoi(b,c);
    if c>d then c:=d;
    k:=max(a, max(b,c));
    write(k)
end.
