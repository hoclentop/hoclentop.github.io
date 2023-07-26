var s,p:string;
    n,d,i : integer;
    stop : boolean;
function ktdxung(s:string):boolean;
var n,i,j:integer;
begin
    n:=length(s);
    j:=n;
    for i:= 1 to n div 2 do begin
        if s[i]<>s[j] then exit(false);
        dec(j);
    end;
    exit(true);
end;
BEGIN
    readln(s);
    n:=length(s);
    stop:=false;
    for d:= n downto 1 do begin
        if stop then break;
        for i:= 1 to n-d+1 do begin
            p:=copy(s,i,d);
            if ktdxung(p) then begin
                writeln(p);
                stop:=true;
            end;
        end;
    end;
END.