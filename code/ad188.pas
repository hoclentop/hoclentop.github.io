program Bai188;
var a, b: integer;
  function UCLN(m,n: integer): integer;
  begin
    while m <> n  do if m > n then m:= m - n else n := n - m;
    UCLN := m;
  end;
    
  begin
  readln(a, b);
  writeln((a*b) div UCLN(a,b));
  end.