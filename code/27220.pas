program Bai220;
  var n, m: longint;
  function SNT(x: longint) : boolean;
    var i :longint;
    begin
    if x < 2 then exit(false);
    for i := 2 to x div 2 do 
        if x mod i = 0 then exit(false);
        exit(true);
    end;
    function UCLN(a, b: integer): integer;
        begin
        while a <> b  do if a > b then a := a - b else b := b - a; 
        UCLN := a;  
        end;    
begin
  readln(n, m);
       if (SNT(n) = true) and (SNT(m) = true) and (UCLN(n,m)  = 1) then
          writeln('YES') else writeln('NO');
end.