uses math;
type SACH = record
    dai, rong : longint;
end;
function xeptruoc(x, y : SACH) : boolean;
begin
    if x.dai < y.dai then exit(true);
    exit((x.dai=y.dai) and (x.rong<y.rong));
end;
var a : array[1..200000] of SACH;
  n, i, j, fmax : longint;
  tmp : SACH;
  f : array[1..200000] of longint;
begin
    assign(input,'chonsach.inp'); reset(input);
    assign(output,'chonsach.out'); rewrite(output);
    readln(n);
    for i:= 1 to n do readln(a[i].dai, a[i].rong);
    for i:=1 to n-1 do
        for j:=i+1 to n do 
            if xeptruoc(a[j], a[i]) then begin
                tmp:=a[i];
                a[i]:=a[j];
                a[j]:= tmp;
            end;
    fmax:=0;
    for i:= 1 to n do begin
        f[i]:=1;
        for j:= 1 to i-1 do 
            if (a[j].dai<a[i].dai) and (a[j].rong<a[i].rong) then
                f[i] := max(f[i], f[j]+1);
        fmax := max(fmax, f[i]);
    end;
    write(fmax);
end.
