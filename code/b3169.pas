program Bai169;
  var s: string;
  i: byte;
begin
  readln(s);
  for i := length(s) downto 1 do write(s[i]);
end.