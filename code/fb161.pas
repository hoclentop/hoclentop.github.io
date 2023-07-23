program Bai161;
var s: string;
    i, n: byte;
    so, hoa, thuong: boolean; 
begin
  readln(s);
  n := length(s);
  so := false;
  hoa := false;
  thuong := false;
  for i := 1 to n do
    begin
      if (s[i] >= '0') and (s[i] <= '9') then  so := true;
      if (s[i] >= 'A') and (s[i] <= 'Z') then  hoa := true;
      if (s[i] >= 'a') and (s[i] <= 'z') then  thuong := true;
    end;
    if n < 8 then writeln('YEU')
      else 
        if (so = true) and (hoa = true) and (thuong = true) then  writeln('MANH')
        else writeln('THUONG');
end.
