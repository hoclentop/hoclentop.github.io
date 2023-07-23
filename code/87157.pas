program Bai157;
var x, y: string;
    i,n,v, dem : byte;
  begin
  readln(x);
  readln(y);
  n := length(y);
  dem := 0;
  for i := 1 to n do if pos(x,y) > 0 then
    begin
    dem := dem +1;
    v := pos(x,y);
    delete(y,v, v +1);
    end;
  writeln(dem);
  end.