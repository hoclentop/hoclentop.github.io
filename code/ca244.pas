uses math;
var i, n, k, j, t: integer;
    a : array[1..1000] of integer;
BEGIN
    readln(n,k);
    for i:= 1 to n do read(a[i]);
    for i:= 1 to n-1 do
        for j:= i to n do
            if a[i]>a[j] then begin
                t:=a[i];
                a[i]:=a[j];
                a[j]:=t;
            end;
    write(a[k]);
END.