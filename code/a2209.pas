program Bai209;
  var a : array[1..1000] of integer;
  i,n: integer;
 begin
  readln(n);
  for i:= 1 to n do read(a[i]);
  for i := 2 to n do 
      if a[i] < a[i - 1] then 
          begin
          writeln('NO');
          exit;
          end
      else  
        begin
          writeln('YES');
          exit;
       end;
end.