var n, i, s : integer;
begin
    readln(n);
    s:=0;
    for i:= 1 to n do 
        if i mod 2 = 0 then s:=s+i 
        else s:=s-i;
    write(s)
end.