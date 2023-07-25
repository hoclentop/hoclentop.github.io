program Bai203;
  var n, a: longint;
  function SNT(x: longint) : boolean;
    var i :longint;
    begin
    if x < 2 then exit(false);
    for i := 2 to x div 2 do 
        if x mod i = 0 then exit(false);
        exit(true);
    end;
begin
  readln(n);
  for a := (n div 2) downto 2 do
      begin
      if (SNT(a) = true) and (SNT(n - a)) = true then
         begin
         writeln (a, '   ', n-a);
         exit;
         end;
      end;
end.