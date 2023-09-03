var s : string;
    dem, i, n : integer;
    c : char;
BEGIN
    readln(s);
    n:= length(s);
    for c:= '0' to 'Z' do begin
        dem:=0;
        for i:= 1 to n do
            if s[i]=c then inc(dem);
        if dem > 0 then writeln(c,' ',dem);
    end;
END.
