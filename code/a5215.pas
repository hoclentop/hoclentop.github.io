program Bai215;
var s, p, pmax: string;
    c, d, n: byte;
begin
  readln(s);
   n := length(s);
   s := s + ' ';
   d := 1;
   pmax := '';
   for c:= 1 to n do
    begin
      if not (s[c] in ['0'..'9']) then 
          begin
          if c> d then 
            begin
              p := copy(s, d, c - d );
              if (length(p) > length(pmax))  or ((length(p) = length(pmax))and (p > pmax)) then
              pmax :=p;
            end;
             d := c +1;
          end;
     end;
     write(pmax);
end.