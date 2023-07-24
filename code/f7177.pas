program Bai177;
var s: string;
    dem, i: byte; 
  begin
  readln(s);
  dem := 0;
  for i := 1 to length(s) do 
      if (s[i] >='0') and (s[i] <= '9') then dem := dem + 1;
      write(dem);
 end.