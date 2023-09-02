uses math;
type TROCHOI = record
    bd, kt : longint;
end;

Var T : array[1..1000] of TROCHOI;
    n, i, j : integer;
    F : array[1..1000] of integer;
    fmax : integer;
    tmp : TROCHOI;

function xeptruoc(x, y : TROCHOI) : boolean;
begin
    exit((x.kt < y.kt) or ((x.kt=y.kt) and (x.bd<y.bd)));
end;

BEGIN
    readln(n);
    for i:= 1 to n do readln(T[i].bd, T[i].kt);
    for i:= 1 to n-1 do
        for j:= i+1 to n do
            if xeptruoc(T[i], T[j]) = false then begin
                tmp:=T[i];
                T[i]:=T[j];
                T[j]:=tmp;
            end;
    fmax := 0;
    for i:= 1 to n do begin
        F[i]:=1;
        for j:= 1 to i-1 do
            if T[j].kt <= T[i].bd then
                F[i] := max(F[i], F[j]+1);
        fmax := max(fmax, F[i]);
    end;
    write(fmax);
END.
