var s : string;
    i,j,n:integer;
BEGIN
    readln(s);
    n:= length(s);
    for i:= 1 to n do
        for j:= i to n do
            writeln(copy(s,i,j-i+1));
END.