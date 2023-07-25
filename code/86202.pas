program Bai202;
  var n, a: integer;
  function SNT(x: longint) : boolean;
    var i :longint;
    begin
    if n < 2 then exit(false);
    for i := 2 to x div 2 do 
        if x mod i = 0 then exit(false);
        exit(true);
    end;
begin
  readln(n);
  for a := 2 to n div 2 do
      if (SNT(a) = true) and (SNT(n - a)) = true then
  writeln (a, '   ', n-a);
end.