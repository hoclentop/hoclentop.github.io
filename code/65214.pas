program Bai214;
var s, p: string;
    i,d, n: byte;
function ktdxung(s: string): boolean;
var i, j: byte;
begin
  n := length(s);
  j := n;
  for i := 1 to n div 2 do 
    begin
      if s[i] <> s[j] then exit(false);
      j := j - 1;
    end;
  exit(true);
end;
begin
  readln(s);
   n := length(s);
   p := '';
   for d:= n downto 1 do
      for i := 1 to n + 1 - d do
          begin
          p := copy(s, i, i+d- 1 );
          if ktdxung(p) = true then
              begin
              write(p);
              exit;
              end;
          end;
end.