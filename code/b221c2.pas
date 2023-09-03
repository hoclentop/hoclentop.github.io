var t, tmp : longint;
    a : array[1..10000] of longint;
    c, v, i, j : integer;
BEGIN
    assign(input,'viecnha.inp'); reset(input);
    assign(output,'viecnha.out'); rewrite(output);
    readln(t);
    readln(c);
    for i:= 1 to c do readln(a[i]);
    for i:= 1 to c-1 do
        for j:= i+1 to c do
            if a[i]>a[j] then begin
                tmp:= a[i];
                a[i]:=a[j];
                a[j]:=tmp;
            end;
    v:=0;
    for i:= 1 to c do begin
        if t < a[i] then break;
        t:= t - a[i];
        v:= i;
    end;
    write(v);
END.
