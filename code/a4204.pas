program Bai204;
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
  n := n + 1;
  while SNT(n) = false do n := n + 1;
      writeln (n);
end.