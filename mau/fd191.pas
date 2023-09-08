program Bai191;
var n, i : integer;
begin
    readln(n);
    for i := 1 to n do 
        if (i mod 2 = 1) and (n mod i = 0) then
            writeln (i, '  ');
end.
