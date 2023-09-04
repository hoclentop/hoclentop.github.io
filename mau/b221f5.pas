var s : ansistring;
    n, i, j : longint;
    cs, ch, ct : longint;
    dem:int64;
BEGIN
    assign(input,'cau4.inp'); reset(input);
    assign(output,'cau4.out'); rewrite(output);
    readln(s);
    n:=length(s);
    cs:=0;
    ct:=0;
    ch:=0;
    dem:=0;
    i:=1;
    for j:= 1 to n do begin
        if s[j] <='9' then inc(cs)
        else if s[j] <= 'Z' then inc(ch)
        else inc(ct);
        while (i+5<=j) and (cs>0) and (ch>0) and (ct>0) do begin
            dem+=n-j+1;
            if s[i]<='9' then dec(cs)
            else if s[i]<='Z' then dec(ch)
            else dec(ct);
            inc(i);
        end;
    end;
    write(dem);
END.
