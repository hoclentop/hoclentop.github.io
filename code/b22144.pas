type TRANGTHAI = array[1..9] of byte;
var a : TRANGTHAI;
    f : array[1..262200] of longint;
    q : array[1..300000] of longint;
    d,c,u,v : longint;
    i,j : byte;
    p : array[1..9,1..5] of byte = ((1,2,4,5,0),(1,2,3,0,0),(2,3,5,6,0),(1,4,7,0,0),
(2,4,5,6,8),(3,6,9,0,0), (4,5,7,8,0),(7,8,9,0,0),(5,6,8,9,0));
function chuyen(a : TRANGTHAI) : longint;
var i : byte; s : longint;
begin
    s:= 0;
    for i:= 1 to 9 do s:=s*4 + a[i];
    exit(s)
end;
procedure tach(s : longint);
var i : byte;
begin
    for i:= 9 downto 1 do begin
        a[i]:= s mod 4;
        s:= s div 4;
    end;
end;
 
BEGIN
    assign(input,'dongho.inp'); reset(input);
    assign(output,'dongho.out'); rewrite(output);
    for i:= 1 to 9 do read(a[i]);
    v:= chuyen(a);
    fillchar(f, sizeof(f), 0);
    f[v]:=1;
    d:=1; c:= 1;
    q[1]:= v;
    while d<=c do begin
        u:= q[d];
        inc(d);
        for i:= 1 to 9 do begin
            tach(u);
            for j:= 1 to 5 do 
                if p[i,j] > 0 then
                    a[p[i,j]]:=(a[p[i,j]]+1) mod 4;
            v:= chuyen(a);
            if f[v] = 0 then begin
                f[v]:=f[u]+1;
                if v = 0 then begin
                    write(f[v]-1);
                    exit;
                end;
                inc(c);
                q[c]:=v;
            end;
        end;
    end;
END.
