Program Bai134;
var x, y:string;
begin
  readln(x);
  readln(y);
    if pos(x, y) > 0 then writeln ('YES') else writeln('NO');
end.