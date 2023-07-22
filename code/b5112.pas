program Bai112;
var xA, xB, xC, xM, yA, yB, yC, yM: real;
s, tong: real;

function KC(x1, y1, x2, y2: real): real;
var d : real;
begin
    exit(sqrt(sqr(x2 - x1) + sqr(y2 - y1)));
end;

function dt(a, b, c : real): real;
var p, s : real;
begin
    p := (a + b + c)/2;
    exit(sqrt(p*(p-a)*(p-b)*(p-c)));
end;

function dt3giac(x1, y1, x2, y2, x3, y3 : real): real;
var a, b, c : real;
begin
    a:= KC(x1, y1, x2, y2);
    b:= KC(x2, y2, x3, y3);
    c:= KC(x1, y1, x3, y3);
    exit(dt(a,b,c));
end;

function bangnhau(a, b : real): Boolean;
begin
    exit(abs(a-b)<0.000001);
end;

begin
    readln(xA, yA);
    readln(xB, yB);
    readln(xC, yC);
    readln(xM, yM);
    
    s := dt3giac(xA, yA, xB, yB, xC, yC);
    tong := dt3giac(xA, yA, xB, yB, xM, yM)+dt3giac(xA, yA, xC, yC, xM, yM)+dt3giac(xB, yB, xC, yC, xM, yM);

    if bangnhau(s, tong) then writeln('YES') 
    else writeln('NO');
end.