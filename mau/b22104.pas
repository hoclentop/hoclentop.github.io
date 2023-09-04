uses math;
var n, a, b : longint;
    dem, qa, qb, ra, rb : int64;
BEGIN
    assign(input,'new.inp'); reset(input);
    assign(output,'new.out'); rewrite(output);
    readln(n, a, b);
    dem:=-1;
    qa:= a div n;
    ra:= a mod n;
    qb:=b div n;
    rb:= b mod n;
    dem+=(qa+1)*(qb+1);
    if ra+rb>=n  then
        dem+= (ra+rb-n+1)*(qa+1)*(qb+1);
    dem += min(ra, n-rb-1) * (qa+1) * qb;
    dem += (n-max(ra+1,n-rb)) * qa * (qb+1);
    if ra+rb<=n-2 then
        dem += ((n-rb-1)-(ra+1)+1)*qa*qb;
    write(dem);
END.
