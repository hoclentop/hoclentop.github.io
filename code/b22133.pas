var n,m:longint; tong:int64;
    a,x:array[1..10000001] of longint;
    f:text;
procedure ktt;
var i:longint;
begin
    assign(f,'CHONSO.INP');
    reset(f);
    readln(f,n);
    for i:=1 to n do readln(f,a[i]);
    readln(f,m);
    close(f);
    assign(f,'CHONSO.OUT');
    rewrite(f);
end;
procedure inkq(n:longint);
var i:longint;
begin
    for i:=1 to n do write(f,x[i]);writeln(f);
end;
procedure qlui(i:longint);
var j:byte;
begin
    for j:=0 to 1 do
    begin
        x[i]:=j;
        tong:=tong+a[i]*x[i];
        if tong=m then inkq(n)
        else if (tong<m) and (i<n) then qlui(i+1);
        tong:=tong-x[i]*a[i];
        x[i]:=0;
    end;
end;
BEGIN
    ktt;
    tong:=0;
    qlui(1);
    close(f);
END.
