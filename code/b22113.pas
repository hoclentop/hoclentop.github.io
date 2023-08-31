var p, m, y : array[1..1000] of longint;
    k, a, x, z, n, r, j, n2: longint;
    ok : boolean;
BEGIN
    assign(input,'bai03.inp'); reset(input);
    assign(output,'bai03.out'); rewrite(output);
    readln(n); 
    x:=2; k:= 0; r:=0; a:=1; n2:=n;
    while x*x <= n do begin
        while n mod x = 0 do begin
            inc(r);
            n:= n div x;
        end;
        if r > 0 then begin
            inc(k);
            p[k]:=x;
            m[k]:=r;
            a:= a* x;
        end;
        inc(x);
        r:=0;
    end;
    if n > 1 then begin
        inc(k);
        p[k]:=n;
        m[k]:=1;
        a:=a*n;
    end;
    for x:= 1 to n2 div a do begin
        fillchar(y, k*4, 0);
        z:= x;
        ok:=true;
        for j:= 1 to k do begin
            while z mod p[j] = 0 do begin
                inc(y[j]);
                z:= z div p[j];
            end;
            if (y[j]+1)*x*a < m[j] then begin
                ok:=false;
                break;
            end;
        end;
        if ok then begin
            writeln(a*x);
            break;
        end;
    end;
END.
