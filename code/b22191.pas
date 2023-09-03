var s : string;
    c, maxc, i : integer;
BEGIN
    assign(input,'lword.inp'); reset(input);
    assign(output,'lword.out'); rewrite(output);
    readln(s);
    s:= s+' ';
    c:=0;
    maxc:=0;
    for i:= 1 to length(s) do 
        if s[i]=' ' then begin
            if maxc < c then maxc:= c;
            c:=0;
        end
        else 
            inc(c);
    write(maxc);
END.
