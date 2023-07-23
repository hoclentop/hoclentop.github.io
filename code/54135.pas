Program Bai135;
var s :string;
n: byte;
begin
  readln(s);
  n := length(s);
      if n < 6  then writeln ('QUA NGAN') 
      else 
        if (n > 6) and (n < 8) then writeln('THUONG')
        else write('TOT');
end.