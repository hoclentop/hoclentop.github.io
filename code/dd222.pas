program Bai222;
  uses math;
  var a, b : integer;
      x: byte;
begin
  readln(a,b);
      for x := 1 to min(a,b) do 
          begin
            if (a mod x = 0) and (b mod x = 0) then
            write(x, '  ');
          end;
end.