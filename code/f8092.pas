program Bai092;
var a, b, c :integer;
begin
 readln(a, b, c);
 
 if ((a+b>c) and (a + c > b) and  (b + c > a) )  then writeln('YES ')
 else   writeln('NO ');
end.