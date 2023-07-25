program Bai197;
  var n, x: integer;
  function TONGUOC(a: integer): integer;
    var i, s: integer;
  begin
  s := 0;
  for i := 1 to a div 2 do 
     if a mod i = 0 then  s:= s +i;
 TONGUOC := s;
  end;
  
  begin
  readln(n);
  for x := 1 to n do if TONGUOC(x) = x then write(x, '  ');
end.