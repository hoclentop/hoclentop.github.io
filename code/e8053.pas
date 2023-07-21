program Bai053;
Var n, k, kq: integer;
begin
   readln(k, n);
   kq := n div k;
   if n mod k > 0 then kq:=(n div k)*k;
    write(kq);
end.