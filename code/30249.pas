var cs:array[1..13] of string = ('IV','IX','XL','XC','CD','CM', 'I','V','X','L','C','D','M');
    gt:array[1..13] of integer = (4,9,40,90,400,900, 1,5,10,50,100,500,1000);
    s : string;
    T, i, v : integer;
BEGIN
    readln(s);
    T:=0;
    for i:= 1 to 13 do begin
        while pos(cs[i], s)>0 do begin
            v:=pos(cs[i], s);
            delete(s, v, length(cs[i]));
            T:=T+gt[i];
        end;
    end;
    write(T);
END.