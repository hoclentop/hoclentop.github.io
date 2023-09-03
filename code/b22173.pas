var n,d, i, j,t : integer;
    a : array[1..10000] of longint;
    dem : int64;
    x : array[1..10001,0..4] of integer;
BEGIN
    readln(n);
    for i:= 1 to n do read(a[i]);
    fillchar(x, sizeof(x), 0);
    for i:= n downto 1 do begin
        for j:= 0 to 4 do x[i,j]:=x[i+1,j];
        inc(x[i][a[i] mod 5]);
    end;
    dem:= 0;
    for i:= 1 to n-2 do
        for j:= i+1 to n-1 do begin
            d:= (a[i]+a[j]) mod 5;
            t:= 5-d;
            if d=0 then t:=0;
            dem:= dem+x[j+1][t];
        end;
    write(dem);
END.
