var s, p:string;
    n,i,j:integer;
function ktdoixung(s:string):boolean;
var i,n:integer;
begin
    n:=length(s);
    i:=1;
    while (i<n) and (s[i]=s[n]) do begin
        inc(i);
        dec(j);
    end;
    exit(i>=n);
end;
BEGIN
    readln(s);
    n:=length(s);
    for i:= 1 to n do
        for j:= i to n do begin
            p:=copy(s,i,j-i+1);
            if ktdoixung(p) then writeln(p);
        end;
END.