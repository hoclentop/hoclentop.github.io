var s:string;
    i,d:longint;
begin
   read(s);
   d:=0;
   i:=1;
   while i<=length(s) do
      begin
         if (s[i]='A') then inc(d);
         inc(i);
      end;
   write(d);
end.
