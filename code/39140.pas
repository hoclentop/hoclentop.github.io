program Bai140;
var a, b :integer;
begin
  for a := 1 to 9 do 
    for b := 0 to a do 
    if (a- b = 0) or (a- b = 1) or (a- b = 4) or (a- b = 9) 
    then  writeln (a,b);
end.