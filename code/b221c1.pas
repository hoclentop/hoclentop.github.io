var  c : array[0..9] of byte;
    x : string;
    n, i, v, y, d : integer;
function cstrong(gh : integer): integer;
var i : integer;
begin
    for i:= gh+1 to 9 do
        if c[i] = 0 then exit(i);
    exit(-1)
end;

BEGIN
    assign(input,'sodoclap.inp'); reset(input);
    assign(output,'sodoclap.out'); rewrite(output);
    readln(x);
    x:= '0'+x;
    n:= length(x);
    i:= n;
    while x[i]='9' do begin
        x[i]:='0';
        dec(i);
    end;
    inc(x[i]);
    fillchar(c, sizeof(c), 0);
    v:= -1;
    if x[1]<>'0' then c[ord(x[1])-48]+=1;
    for i:= 2 to n do begin
        y:= ord(x[i])-48;
        c[y]+=1;
        if c[y]=2 then begin
            v:=i;
            break;
        end;
        
    end;
    if v = -1 then begin
        if x[1]='0' then delete(x,1,1);
        write(x);
        exit;
    end;
    d:= cstrong(y);
    while d = -1 do begin
        y:= ord(x[v])-48;
        c[y]-=1;
        dec(v);
        d:= cstrong(ord(x[v])-48);
    end;
    x[v]:= chr(d+48);
    c[d]+=1;
    for i:= v+1 to n do begin
        d:=cstrong(-1);
        x[i]:=char(d+48);
        c[d]+=1;
    end;
    if x[1]='0' then delete(x,1,1);
    write(x);
END.
