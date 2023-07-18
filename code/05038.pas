var n, k, x : integer;
begin
    readln(n);
    k:=trunc(sqrt(n));
    for x:= 0 to k do
        write(sqr(x), ' ');
end.
