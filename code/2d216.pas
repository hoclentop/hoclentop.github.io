program Bai216;
var a:array[1..1000] of integer;
    i, n: integer;
begin
  readln(n);
  for i := 1 to n do read(a[i]);
  for i := 1 to n do 
    begin
    if (a[i] mod 2) + (a[i+1] mod 2) <> 1 then 
        begin
          writeln ('NO');
          exit;
        end;
    end;
    write('YES');
end.