uses math;
type OX = record
    x, y : integer;
end;
function xeptruoc(b,c : OX) : Boolean;
begin
    if b.x < c.x then exit(true);
    exit((b.x=c.x) and (b.y<c.y))
end;
var m, n, k, i, j, t, p : integer;
    a : array[0..1001] of OX;
    tmp : OX;
    smax : int64;
    ymax : longint;
    b : array[0..1001] of integer;
begin
    assign(input,'hcn.inp'); reset(input);
    assign(output,'hcn.out'); rewrite(output);
    readln(m, n, k);
    for i:= 1 to k do readln(a[i].x, a[i].y);
    for i:= 1 to k-1 do
        for j:= i+1 to k do 
            if xeptruoc(a[j],a[i]) then begin
                tmp:=a[i];
                a[i]:=a[j];
                a[j]:=tmp;
            end;
    inc(k);
    a[k].x := m+1;
    a[k].y:= n+1;
    a[0].x := 0;
    a[0].y:=0;
    smax:=0;
    for i:= 0 to k-2 do begin
        p:= 3;
        b[1]:=0;
        b[2]:= a[i+1].y;
        b[3]:= n+1;
        for j:= i+2 to k do begin
            ymax:=0;
            for t:= 1 to p-2 do 
                ymax := max(ymax, b[t+2]-b[t]-1);
            smax := max (smax, ymax*(a[j].x-a[i].x-1));
            t:= p;
            while b[t] >= a[j].y do begin
                b[t+1]:=b[t];
                dec(t);
            end;
            b[t+1]:= a[j].y;
            inc(p);
        end;
    end;
    write(smax);
end.
