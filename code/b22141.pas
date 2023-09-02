program bai1dekontum;
var x, y, n, i : longint;
    s, xmin, xmax, ymin, ymax: int64;
begin
    assign(input,'hcn.inp'); reset(input);
    assign(output,'hcn.out'); rewrite(output);
    readln(n);
    readln(x, y);
    xmin := x;
    xmax := x;
    ymin := y; 
    ymax := y;
    for i := 2 to n do begin
        readln(x,y);
        if xmin > x then xmin := x;
        if xmax < x then xmax := x;
        if ymin > y then ymin := y;
        if ymax < y then ymax := y;
    end;
    s := (ymax - ymin+2)*(xmax - xmin+2); 
    writeln(s);
end.
