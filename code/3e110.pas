program Bai110;
var a, b,c: real;
begin
  readln(a, b, c);
    if (a = b) and (b = c) then writeln(' DEU') 
    else
    if (a =b) or (a = c) or (b = c) then  write('CAN')
      else write('THUONG');
end.