program bai4dequangtri;
var n : integer;
T : qword;
begin
    assign(input,'cau4.inp'); reset(input);
    assign(output,'cau4.out'); rewrite(output);
     
    readln(n);
    T:= 1;
    while n > 4 do
    begin
        T := T*3;
        n := n - 3;
    end;
    T := T*n;  
    writeln(T);
end.
