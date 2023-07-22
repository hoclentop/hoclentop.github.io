program Bai117;
var a, b, kq :integer;
  c : char;
begin
readln(a, b);
readln(c); 
  if c = '+' then kq := a + b
    else   if c = '*' then kq := a * b
   else kq := a - b;
  writeln (kq)
end.