program Bai221;
  var s : string;
      i, n: byte;
begin
  readln(s);
  n := length(s);
    for i := 1 to n do 
            if (s[i] <> '0' ) and (s[i] <> '1') then
            begin
              writeln('NO');
              exit;
            end;
    writeln('YES');
end.