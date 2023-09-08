type DIEM = record
    x, y : longint;
end;
function xeptruoc(a, b : DIEM) : boolean;
var ka, kb : integer;
begin
    ka:= sqr(a.x) + sqr(a.y);
    kb:= sqr(b.x) + sqr(b.y);
    if (ka<kb)or((ka=kb)and(a.x>b.x)) then exit(true)
    else exit(false)
end;
var n, i, j : integer;
    A : array[1..1000] of DIEM;
    tmp : DIEM;
BEGIN
    readln(n);
    for i:= 1 to n do 
        readln(A[i].x, A[i].y);
    for i:= 1 to n-1 do
        for j:= i+1 to n do
            if not xeptruoc(A[i], A[j]) then 
            begin
                tmp:= A[i];
                A[i]:= A[j];
                A[j]:= tmp;
            end;
    for i:= 1 to n do 
        writeln(A[i].x,' ',A[i].y);
END.
