var i, n: integer;
    a, b : array[1..1000] of integer;
BEGIN
    readln(n);
    for i:= 1 to n do read(a[i]);
    b[1]:=a[1];
    for i:= 2 to n do b[i]:=b[i-1]+a[i];
    for i:= 1 to n do write(b[i],' ');
END.