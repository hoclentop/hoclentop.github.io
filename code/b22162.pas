procedure tim(s : string);
var c : array[0..25] of integer;
    x, i : integer;
begin
    fillchar(c, sizeof(c), 0);
    for i:= 1 to length(s) do begin
        x:= ord(s[i]) - 65;
        inc(c[x])
    end;
    for x:= 0 to 25 do
        if c[x] = 1 then begin
            write(chr(x+65));
            break;
        end;
end;

var n, i : integer;
    s : string;
BEGIN
    assign(input,'MatKhau.inp'); reset(input);
    assign(output,'MatKhau.out'); rewrite(output);
    readln(n);
    for i:= 1 to n do begin
        readln(s);
        tim(s);
    end;
END.
