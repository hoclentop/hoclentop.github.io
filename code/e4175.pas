program Bai175;
  var s: string;
  n, i : byte;
begin
  readln(s);
  n := length(s);
  for i := 1 to n do 
    begin
    write(s[1..i]);
    writeln;
    end;
end.