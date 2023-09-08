type PHANSO = record
    tu, mau : longint;
end;
function xeptruoc(a, b : PHANSO) : boolean;
begin
    if a.tu*b.mau < a.mau*b.tu then exit(true)
    else exit(false)
end;
var n, i, j : integer;
    A : array[1..1000] of PHANSO;
    tmp : PHANSO;
BEGIN
    readln(n);
    for i:= 1 to n do 
        readln(A[i].tu, A[i].mau);
    for i:= 1 to n-1 do
        for j:= i+1 to n do
            if not xeptruoc(A[i], A[j]) then 
            begin
                tmp:= A[i];
                A[i]:= A[j];
                A[j]:= tmp;
            end;
    for i:= 1 to n do 
        writeln(A[i].tu,' ',A[i].mau);
END.
