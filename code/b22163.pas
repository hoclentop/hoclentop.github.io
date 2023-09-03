program bai3denghean;
uses math;
var
n, x, y : longint;
c : Array[1..100000] of longint;
dem, i,j : longint;
begin
    assign(input,'trungthuong.inp'); reset(input);
    assign(output,'trungthuong.out'); rewrite(output);
    
    readln(n);
    for i:= 1 to n do read(c[i]);
    for i := 1 to (n - 1) do
    begin
        y := c[i];
        x := c[i];
        for j := i + 1 to n do 
        begin
            if x > c[j] then x := c[j];
            if y < c[j] then y := c[j];
            if (x= min(c[i], c[j])) and (y = max(c[i], c[j]))
            then dem := dem +1;
        end;
    end;
    writeln(dem);
end.
