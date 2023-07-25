program Bai189;
  var TS, MS : integer;

  function UCLN(m,n: integer): integer;
  begin
    while m <> n  do if m > n then m:= m - n else n := n - m;
    UCLN := m;
  end;
  begin
  readln(TS,MS);
  TS := TS div UCLN(TS,MS);
  MS := MS div UCLN(TS,MS);
  writeln (TS, '/', MS);
end.