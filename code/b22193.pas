var k,n:int64;
        x,y:extended;
begin
        assign(input,'CD.INP'); reset(input);
        assign(output,'CD.OUT'); rewrite(output);
        readln(input,n,k);
        x:=(-k+4*n) div 2;
        y:=n-((-k+4*n) div 2);
        if (x>=0) and (y>=0) and (2*x=-k+4*n)
          then write(output,x:0:0,' ',y:0:0) else write(output,'-1');
        close(input); close(output);
end.
