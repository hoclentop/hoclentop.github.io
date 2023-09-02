function songto(k:longint):boolean;
var x : integer;
begin
    if k<2 then exit(false);
    for x:= 2 to trunc(sqrt(k)) do
        if k mod x = 0 then exit(false);
    exit(true);
end;

function dondieu(k : longint) : boolean;
var s : array[1..9] of byte;
    t, c, i : byte;
begin
    t:= 0;
    while k > 0 do begin
        c:= k mod 10;
        inc(t);
        s[t]:= c;
        k:= k div 10;
    end;
    for i:= 2 to t-1 do begin
        if s[i-1]=s[i] then exit(false);
        if (s[i-1]<s[i]) = (s[i]<s[i+1]) then exit(false);
    end;
    if s[t] = s[t-1] then exit (false);
    exit(true);
end;
var n, i, k, dem : byte;
    x : longint;
BEGIN
    readln(n);
    dem:=0;
    for i:= 1 to n do begin
        read(x);
        if songto(x) and dondieu(x) then inc(dem);
    end;
    writeln(dem);
    readln(k);
    x:=0;
    for i:= 1 to k do x:=x*10+9;
    while (songto(x)=false) or (dondieu(x)=false) do dec(x);
    writeln(x);
END.
