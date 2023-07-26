var x1,y1,x2,y2:integer;
    a,b,c:integer;
begin
    readln(x1,y1);
    readln(x2,y2);
    a:=y2-y1;
    b:=x1-x2;
    c:=-x1*(y2-y1)-y1*(x1-x2);
    writeln(a,' ',b,' ',c);
end.