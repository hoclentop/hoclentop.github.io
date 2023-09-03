var n,i,d1,d2:longint;
    s:string;
begin
     assign(input,'che.inp'); reset(input);
     assign(output,'che.out'); rewrite(output);
     readln(n);
     readln(s);
     for i:=1 to length(s) do
         begin
              if s[i]='A' then inc(d1);
              if s[i]='B' then inc(d2);
         end;
         if d1>d2 then writeln('>');
         IF D1<D2 then writeln('<');
         if d1=d2 then writeln('=');
end.
