var c : array[1..1000] of longint;
    m, n, i, j, t: longint;
    h, x, y, x2, y2 : integer;
    dx : array[0..3] of integer = (0, 1, 0, -1);
    dy : array[0..3] of integer = (1, 0, -1, 0);
    a : array[0..1001,0..1001] of integer;
BEGIN
    assign(input,'cau2.inp'); reset(input);
    assign(output,'cau2.out'); rewrite(output);
    readln(m,n);
    fillchar(c, sizeof(c), 0);
    for i:= 1 to m*n do begin
        read(x);
        inc(c[x]);
    end;
    inc(c[1000]);
    h:=0;
    x:=1;
    y:=1;
    fillchar(a, sizeof(a), -1);
    for i:= 0 to n+1 do begin
        a[0,i]:=1;
        a[m+1, i]:=1;
    end;
    for i:= 1 to m do begin
        a[i,0]:=1;
        a[i,n+1]:=1;
    end;
    t:=0; 
    
    while c[t] = 0 do inc(t);
    for i:= 1 to m*n do begin
        a[x,y]:=t;
        dec(c[t]);
        while c[t]=0 do inc(t);
        x2:= x+dx[h];
        y2:= y+dy[h];
        if a[x2,y2]>=0 then h:=(h+1) mod 4;
        x:=x+dx[h];
        y:=y+dy[h];
    end;
    for i:= 1 to m do begin
        for j:= 1 to n do write(a[i,j],' ');
        writeln;
    end;
END.
