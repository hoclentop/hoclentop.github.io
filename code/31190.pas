program Bai190;
  var a,b, c,d, TS, MS, x, y : integer;
  function UCLN(m,n: integer): integer;
  begin
    while m <> n  do if m > n then m:= m - n else n := n - m;
    UCLN := m;
  end;
  begin
  readln(a,b);
  readln(c,d);
  TS := a*d + b*c;
  MS := b*d;
  x := TS div UCLN(TS,MS);
  y := MS div UCLN(TS,MS);
  writeln (x, '/', y);
end.