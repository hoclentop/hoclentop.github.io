program Bai129;
var s: string;
      n, i : byte;
      xd : boolean;
begin
    readln(s);
    xd := true;
    n := length(s);
    for i := 1 to n do 
    begin
        if (s[i] >= '0') and (s[i] <= '9') then
        begin
            write(s[i]);
            xd := false;
        end 
        else
        begin
            if xd = false then  writeln
            else xd := true;
        end;
    end;  
end.