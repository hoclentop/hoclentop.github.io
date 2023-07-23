program Bai155;
var s ,k, h: string;
    i, n, v : byte;
  begin
  readln(s);
  readln(h);
  readln(k);
  n := length(s);
  while pos(h,s) > 0 do
      begin
        v := pos(h,s);
        delete(s, v, 3);
        insert(k, s, v );
      end;
  writeln(s);
  end.