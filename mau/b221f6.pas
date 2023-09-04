uses math;
type TRAM = record
    gia, stt : longint;
end;

var a : array[0..1000] of TRAM;
    d : array[0..1000] of boolean;
    n, k, i, j, v, p, t,  g, m : longint;
    c, s : int64;
    tmp : TRAM;
function xeptruoc(x, y : TRAM) : boolean;
begin
    if x.gia < y.gia then exit(true);
    exit((x.gia=y.gia) and (x.stt<y.stt));
end;
BEGIN
    assign(input,'cau5.inp'); reset(input);
    assign(output,'cau5.out'); rewrite(output);
    readln(n,k);
    for i:= 0 to n-1 do begin
        read(a[i].gia);
        a[i].stt:=i;
    end;
    for i:= 0 to n-2 do
        for j:= i+1 to n-1 do
            if xeptruoc(a[j],a[i]) then begin
                tmp:=a[i];
                a[i]:=a[j];
                a[j]:=tmp;
            end;
    s:=0;
    
    fillchar(d, sizeof(d), 0);
    for i:= 0 to n-1 do begin
        v:= a[i].stt;
        t:= v;
        for j:= v-1 downto 0 do
            if d[j] then begin
                t:=j;
                break;
            end;
        p:=v;
        for j:= v+1 to n-1 do
            if d[j] then begin
                p:=j;
                break;
            end;
        if p=v then c:= min(k, n-v)
        else c:=min(k, p-v);
        if (t=v) or (v-t>k) then g:=0
        else g:= k-v+t;
        if g < c  then begin
            d[v]:=true;
            s+= (c-g)*a[i].gia;
        end;
    end;
    write(s);
END.
