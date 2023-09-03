uses math;
var a,b,c:int64;
    i:longint;
begin
      assign(input,'gcd.inp'); reset(input);
      assign(output,'gcd.out'); rewrite(output);
      readln(a,b);
      c:=1;
      for i:=1 to min(a,b) do c:=c*i;
      write(c);
end.
