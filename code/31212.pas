program Bai212;
  var n, a, b,x, dem: integer;
  function TONGUOC(m: integer): integer;
    var i, s: integer;
  begin
  s := m;
  for i := 1 to m div 2 do 
     if m mod i = 0 then  s:= s + i;
 TONGUOC := s;
  end;
begin
  readln(a,b);
  dem := 0; 
  for x := a to b do 
          if TONGUOC(x) mod 2 = 1 then dem := dem + 1;
          write(dem);
end.