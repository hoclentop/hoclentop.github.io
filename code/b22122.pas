var n, d, i : integer;
    a : array[1..100] of byte;
function check(d : integer):boolean;
var i : integer;
begin
    for i:= 1 to n-d do
        if a[i] <> a[i+d] then exit(false);
    exit(true)
end;
BEGIN
    readln(n);
    for i:= 1 to n do read(a[i]);
    for d:= 1 to n div 2 do
        if check(d) then begin
            write(d);
            break;
        end;
END.
