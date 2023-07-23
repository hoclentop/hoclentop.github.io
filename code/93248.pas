var p : string;
    n, i: integer;
    s, k : longint;
BEGIN
    readln(p);
    p:=p+' ';
    n:=length(p);
    s:=0; k:=0;
    for i:= 1 to n do
        if p[i] in ['0'..'9'] then 
            k:=k*10+ord(p[i])-48
        else begin
            s:=s+k;
            k:=0;
        end;
    write(s)
END.