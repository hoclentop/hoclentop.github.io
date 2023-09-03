program bai1devinhphuc;
var k: integer;
n : integer;
function check(n: integer):Boolean;
var scs, tcs,c: integer;
begin
scs := 0;
tcs := 0;
while n > 0 do
  begin
  c := n mod 10;
  scs := scs + 1;
  tcs := tcs + c;
  n := n div 10;
  end;
exit(tcs mod scs = 0);
end;
begin
assign(input,'divn.inp'); reset(input);
assign(output,'divn.out'); rewrite(output);

  readln(k);
  n := 0;
  while k > 0 do 
    begin
    n := n + 1;
    if check(n) then k := k - 1;
    end;
writeln(n);
end.
