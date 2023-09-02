Type toado=record
     x,y:longint;
     End;
     matran=array[0..1001,0..1001] of longint;
Var n,x1,y1,min,dem:longint;
    l,luu:array[0..1000001] of toado;
    a:matran;
    fi,fo:text;
Procedure ktt;
var i,j:longint;
begin
    assign(fi,'RUNG.inp');
    assign(fo,'RUNG.out');
    {$I-}reset(fi);{$I+}
    if ioresult>0 then
       begin
           rewrite(fi);
           reset(fi);
       end;
    Readln(fi,n);
    Readln(fi,x1,y1);
    for i:=1 to n do
      begin
          for j:=1 to n do read(fi,a[i,j]);
          readln(fi);
      end;
    rewrite(fo);
end;
Procedure loang(i,j:longint);
begin
    if ((i=0)or(i=n+1))or((j=0)or(j=n+1)) then
      begin
          if dem<min then
             begin
                 min:=dem;
                 luu:=l;
             end;
      end
    else
      begin
          a[i,j]:=1;
          dem:=dem+1;
          l[dem].x:=i;
          l[dem].y:=j;
          if a[i,j-1]=0 then loang(i,j-1);
          if a[i,j+1]=0 then loang(i,j+1);
          if a[i-1,j]=0 then loang(i-1,j);
          if a[i+1,j]=0 then loang(i+1,j);
          dem:=dem-1;
          a[i,j]:=0;
      end;
end;
Procedure ghi;
var k:longint;
begin
    if min<maxlongint then
      begin
          writeln(fo,1);
          writeln(fo,min);
          for k:=1 to min do writeln(fo,luu[k].x,' ',luu[k].y);
      end
    else write(fo,0);
end;
BEGIN
    ktt;
    dem:=0;
    min:=maxlongint;
    loang(x1,y1);
    ghi;
    close(fi);
    close(fo);
END.
