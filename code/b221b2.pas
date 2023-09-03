type 
    hs = array[0..1000] of integer;
    huyen = array[1..50] of hs;
var ds, h : huyen;
    n, x, k, y, i, b, s : integer;
procedure them(var a: huyen; x, y : integer);
begin
    //writeln('Them ',x,' ',y);
    inc(a[x,0]);
    a[x, a[x,0]]:=y;
end;
procedure sapxep(var a : hs);
var i,j, m, tmp : integer;
begin
    m:= a[0];
    for i:= 1 to m-1 do
        for j:= i+1 to m do
            if a[i] > a[j] then begin
                tmp:=a[i];
                a[i]:=a[j];
                a[j]:=tmp;
            end;
end;
BEGIN
    assign(input,'index.inp'); reset(input);
    assign(output,'index.out'); rewrite(output);
    for i:= 1 to 50 do begin
        h[i,0]:=0;
        ds[i,0]:=0;
    end;
    readln(n);
    for i:= 1 to n do begin
        readln(x, y);
        them(h, x, y);
    end;
    x:=1;
    for i:= 1 to 50 do begin
        if h[i,0] > h[x,0] then x:= i;
        sapxep(h[i]);
    end;
    k:= h[x,0];
    for i:= 1 to k do them(ds,i, h[x,i]*100+x);
    b:= 1;
    for y:= 1 to 50 do
        if y <> x then begin
            s:= h[y,0];
            if b+s-1 > k then b:=k+1-s;
            for i:= 1 to s do them(ds, b+i-1, h[y,i]*100+y);
            b:=b+s;
            if b>k then b:=1;
        end;
    for i:= 1 to k do begin
        for x:= 1 to ds[i,0] do
            writeln(ds[i,x] mod 100, ' ',ds[i,x] div 100);
    end;
END.
