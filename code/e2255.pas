var s,p : string;
BEGIN
    readln(s);
    readln(p);
    if length(s)>length(p) then write(s)
    else if length(s)<length(p) then write(p)
    else if s>p then write(s)
    else write(p);
END.