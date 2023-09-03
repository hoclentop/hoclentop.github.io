type daybit = array[0..31] of qword;
var d:array[1..2000] of daybit;
    n, m, i,j, p, q : integer;
    dem  : int64;
procedure setbit(var t : daybit; k : integer);
var v : integer; y : qword;
begin
    v := k div 64;
    k := k mod 64;
    y := 1;
    y:= y shl k;
    t[v]:= t[v] or y;
end;
function issetbit(t : daybit; k : integer): boolean;
var v : integer; y : qword;
begin
    v := k div 64;
    k := k mod 64;
    y:=1;
    y:= y shl k;
   exit( t[v] and y > 0);
end;
procedure vietday(t : daybit);
var v, k : byte;
begin
    for v:= 0 to 0 do begin 
        for k:= 1 to 64 do begin
            write (t[v] mod 2);
            t[v]:=t[v] div 2;
        end;
    end;
    writeln;
end;
function countor(x, y : daybit):integer;
var i, s : integer;
    c : qword;
begin
    s:=0;
    for i:= 0 to 31 do begin
        c := x[i] or y[i];
        s:= s + popcnt(c);
    end;
    exit(s);
end;
BEGIN
    assign(input,'cream.inp'); reset(input);
    assign(output,'cream.out'); rewrite(output);
    readln(n,m);
    fillchar(d, sizeof (d), 0);
    for i:= 1 to m do begin
        readln(p,q);
        setbit(d[p], q-1);
        setbit(d[q], p-1);
    end;
    for i:= 1 to n do setbit(d[i], i-1);
    end;
    dem:=0;
    for i:= 1 to n-1 do
        for j:= i+1 to n do
            if issetbit(d[i],j-1) = false then begin
                m:= countor(d[i], d[j]);
                dem := dem+n-m; 
            end;
    write(dem div 3);
END.
