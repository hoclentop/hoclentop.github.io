var x,y,a,b,dem:int64;
begin
    assign(input,'rab.inp'); reset(input);
    assign(output,'rab.out'); rewrite(output);
    readln(x,y,a,b);
    if (y-x) mod (a+b)<>0 then write('-1')
    else write((y-x) div (a+b));
end.
