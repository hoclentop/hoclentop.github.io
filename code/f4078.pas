program Bai078;
var T, gio, phut, giay: integer;
begin
  readln(T);
  gio := T div 10000;
  phut := (T div 100) mod 100;
  giay := T mod 100;
  write(gio, '  ', phut, '  ', giay);
end.