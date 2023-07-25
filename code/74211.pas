program Bai211;
  var n, a, b,x, dem: integer;
  function SOUOC(x: integer): integer;
    var i: integer;
  begin
  dem := 0;
  for i := 1 to x div 2 do 
     if x mod i = 0 then  dem:= dem + 1;
 SOUOC := dem;
  end;
begin
  readln(a,b);
  dem := 0; 
  for x := a to b do 
          if SOUOC(x) mod 2 = 1 then dem := dem + 1;
          write(dem);
end.