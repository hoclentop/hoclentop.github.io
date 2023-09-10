var a,b:longint;
begin
    assign(input,'tamgiac.inp');reset(input);
    assign(output,'tamgiac.out');rewrite(output);
    readln(a,b);
    writeln((a+b-1)-abs(a-b));
end.
