var n,i,x:longint;
function sn(n:longint):longint;
var k:longint;
begin
    k:=0;
    while n>0 do
    begin
        k:=k*10+n mod 10;
        n:=n div 10;
    end;
    exit(k);
end;

function ucln(n,m:longint):longint;
var a:longint;
begin
    while m<>0 do
    begin
      a:=n mod m;
      n:=m;
      m:=a;
    end;
  exit(n);
end;
function dl(n:longint):byte;
begin
    if ucln(x,sn(x))=1 then
        exit(1);
    exit(0);
end;

begin
    assign(input,'CAU1.INP');
    reset(input);
    assign(output,'CAU1.OUT');
    rewrite(output);
    readln(n);
    for i:=1 to n do
    begin
        read(x);
        writeln(dl(x));
    end;
end.
