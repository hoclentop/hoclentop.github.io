program Bai113;
var xK, yK, xM, yM, r, a: real;
function KC(x1, x2, y1, y2: real): real;
  var d : real;
  begin
  d := sqrt(sqr(x2 - x1) + sqr(y2 - y1));
  end;
  begin
  readln(xK, yK, r);
  readln(xM, yM);
  a := KC(xK, xM, yK, yM);
     if r = a then writeln('NAM TREN') 
   else  if a < r then writeln('NAM TRONG') else writeln('NAM NGOAI');
   end.