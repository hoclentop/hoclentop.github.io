uses math;
var i, n, dem, s, j: integer;
    a : array[1..1000] of integer;
BEGIN
    readln(n);
    for i:= 1 to n do read(a[i]);
    dem:=0;
    for i:= 1 to n do begin
        s:=0;
        for j:= i to n do begin
            s+=a[j];
            if s=0 then inc(dem);
        end;
    end;
    write(dem);
END.