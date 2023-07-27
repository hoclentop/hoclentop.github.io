var n,k:longint;
BEGIN
    readln(n);
    k:=trunc(sqrt(2*n));
    if k*k+k=2*n then write(k)
    else write(0);
END.