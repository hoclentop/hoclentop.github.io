program bai3dekontum;
const chucai = 'ABCDEFGHK';

var s : string;
    h : array[1..7] of integer = (3, 5, 7,9, 2, 4, 2);
function xuli(s: string):char;
var t, i: integer;
begin
    t:= 0;
    for i := 1 to 7 do
        t := t + h[i]*(ord(s[i]) - 48);
    xuli :=chucai[t mod 9 + 1];
end;
begin
    assign(input,'madd.inp'); reset(input);
    assign(output,'madd.out'); rewrite(output);
    while not eof() do begin
        readln(s);
        writeln(xuli(s));
    end;
end.
