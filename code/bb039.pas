var n, phut, giay, gio  : word;
begin
    readln(n);
    phut:= n div 60;
    giay:=n mod 60;
    gio:=phut div 60;
    phut:= phut mod 60;
    write(gio);
    if phut<10 then write(0);
    write(phut);
    if giay<10 then write(0);
    write(giay);
end.
