var a : array[1..100000] of integer;
    n, i, j, b : longint;
    s : int64;
BEGIN
    readln(n);
    for i:= 1 to n do read(a[i]);
    i:=1; s:= 0; b:=0;
    while (a[i]>=0) and (i<=n) do inc(i);
    for j:= 1 to n do begin
        inc(b);
        if (s+a[j]>=0) and (i=j) then begin
            inc(s, a[j]);
            inc(i);
            while (i<=n) and (a[i]>=0) do inc(i);
        end;
        if a[j] >= 0 then begin
            inc(s, a[j]);
            if (i<j) and (s+a[i]>=0) then begin
                b:= b+2*(j-i);
                s:= s+a[i];
                inc(i);
                while i<=j do begin
                    if a[i] < 0 then begin
                        if s+a[i] < 0 then break;
                        s:= s+ a[i];
                    end;
                    inc(i);
                end;
                while (a[i]>=0) and (i <= n) do inc(i);
            end;
        end;
    end;
    write(b);
END.
