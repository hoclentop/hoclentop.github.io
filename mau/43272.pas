var x, y : string;
    d : integer;
BEGIN
    readln(x);
    readln(y);
    d:= length(x);
    while pos(x,y) > 0 do 
        delete(y, pos(x,y), d);
    write(y);
END.
