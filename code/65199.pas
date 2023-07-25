program Bai199;
  var n, a, b, dem: integer;
  function TONGUOC(x: integer): integer;
    var s, i: integer;
  begin
  s := 0;
  for i := 1 to x div 2 do 
     if x mod i = 0 then  s:= s +i;
 TONGUOC := s;
  end;
begin
  readln(n);
  dem := 0; 
  for a := 1 to n do 
      begin
      b := TONGUOC(a);
      if (a < b) and (TONGUOC(b) = a) then
          begin
           write(a, '  ', b);
           dem := dem + 1;
           end;
     end;
  if dem = 0 then write(0);
end.