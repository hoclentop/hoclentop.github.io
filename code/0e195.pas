program Bai195;
  var a,b, n, x, dem,k : integer;
  begin
  readln(a,b);
  k := 0;
  for n := a to b do 
      begin
      dem := 0;
      for x := 1 to n do if n mod x = 0 then dem := dem +1; 
      if dem = 9  then  k := k +1;
      end;
      writeln(k);
end.