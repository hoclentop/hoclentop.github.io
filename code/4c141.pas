program Bai141;
var a,b,c :byte;
begin
  for a := 1 to 9 do 
    begin
    for b := 0 to 9 do
      begin
      for c := 0 to 9 do 
      if (100*a + 10*b + c) = (a*a*a + b*b*b + c*c*c) then
     writeln (a,b,c);
     end;
  end;
end.