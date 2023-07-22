program Bai124;
var a, b, c,d: integer;
procedure Hoan_doi(var x, y:integer);
   var tam : integer; 
      begin
        tam := x;
        x := y;
        y := tam;
      end;
begin
readln(a, b, c,d);
if a > b then Hoan_doi(a,b);
if b > c then Hoan_doi(b,c);
if c > d then Hoan_doi(c,d);
if a > b then Hoan_doi(a,b);
if b > c then Hoan_doi(b,c);
if c > d then Hoan_doi(c,d);
if (a =c) or (b = d) then writeln(b)
  else
  begin
    if (d =c) or (b = c) then writeln(c)
      else if a = b then writeln(b)
        else writeln(d);
  end;
end.