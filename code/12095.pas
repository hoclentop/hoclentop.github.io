program Bai095;
var s: string;
    n, dmax,d, c, v : byte;
begin
    readln(s);
    n := length(s);
    d:= 0;
    dmax := 0;
    for c := 1 to n do 
        if s[c] <> #32 then
        begin
            d := d + 1;
            if d > dmax then
            begin
                dmax := d;
                v := c - d + 1;
            end;
        end
        else 
            d := 0;
    write(copy(s,v,dmax));
end.