program Bai114;
var xM, yM: real;
  begin
  readln(xM,yM);
  if (xM > 0) and (yM > 0) then writeln('M thuoc goc phan tu thu I') 
    else if (xM < 0) and (yM > 0) then writeln('M thuoc goc phan tu thu II') 
        else 
        if (xM < 0) and (yM < 0) then writeln('M thuoc goc phan tu thu III') 
            else  writeln('M thuoc goc phan tu thu IV');
   end.