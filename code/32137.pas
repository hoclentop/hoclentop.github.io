program Bai137;
var s : string;
    n,i,k :byte;
begin
  readln(s);
  n := length(s);
  for i := 1 to n do if s[i] > '9' then  
	begin
    k := i;
    write(s[k]);
    end;
end.