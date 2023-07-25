program Bai208;
  var a, b, t,i, k : longint;
 begin
  readln(a, b,k);
  a := a mod b;
     for i := 1to k do 
      begin
      a := a*10;
      t := a div b;
      a := a mod b;
      end;
     writeln (t);
end.