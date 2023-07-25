program Bai207;
  var n,a,dem: longint;
begin
  readln(n);
  dem := 0;
  For a := trunc(sqrt(n)) downto 1 do if n mod a = 0 then 
    begin
    writeln(a, '  ', n div a);
    exit;
    end;
end.