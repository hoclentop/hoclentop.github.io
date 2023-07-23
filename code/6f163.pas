program Bai163;
var x, y: string;
    c: char;
begin
  readln(x);
  readln(y);
  for c := 'a' to 'z' do
   if (pos(c, x)> 0) and (pos(c, y)> 0) then  write(c);
end.