program Bai091;
var Y :integer;
m: byte;
begin
 readln(y);
 readln(m);
 if ((m = 1) or (m = 3) or (m = 5) or (m= 7) or (m = 8) or (m=10) or (m= 12))  then writeln('Thang ', m , 31, ' ngay')
 else
 if ((m = 4) or (m = 6) or (m = 9) or (m= 11)) then writeln('Thang ', m , 30, ' ngay')
 else
 if((y mod 400 = 0) or ((y mod 4 = 0) and (y mod 100 <> 0))) then 
writeln(29, '  ngay')  else writeln(28, '  ngay');
end.