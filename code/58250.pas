uses math;
var  a:array[1..100,1..100] of integer;
    m, n, i, j, s, c, d, tmax, x, y, t : integer;
BEGIN
    readln(m,n);
    for i:= 1 to m do
        for j:= 1 to n do read(a[i,j]);
    tmax:=0;
    for i:= 1 to m do
        for j:= 1 to n do begin
            for t:=1 to min(m-i+1, n-j+1) do begin
                s:=0;
                for c:= 1 to t do
                    for d:= 1 to t do
                        s:=s+a[i+c-1,j+d-1];
                if (s=0) and (t>tmax) then begin
                    tmax:=t;
                    x:=i;
                    y:=j;
                end;
            end;
        end;
    write(x,' ',y,' ',tmax);
END.