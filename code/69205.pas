program Bai205;
  var a, b,n, dem: longint;
  function SNT(x: longint) : boolean;
    var i :longint;
    begin
    if x < 2 then exit(false);
    for i := 2 to x div 2 do 
        if x mod i = 0 then exit(false);
        exit(true);
    end;
begin
  readln(a, b);
  dem := 0;
  For n := a to b do if SNT(n) = true  then dem := dem + 1;
      writeln(dem);
end.