var s : string;
    t, i : integer;
BEGIN
    readln(s);
    t:=0;
    for i:= 1 to length(s) do
        t:=t + ord(s[i])-48;
    write(t)
END.
