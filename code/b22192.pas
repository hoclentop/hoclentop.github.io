Type KM = Array [1..200000] of LongInt;
Var A, C : KM; n, i, k, Ans, Temp : LongInt; F : Text;
Begin
    Assign(Input, 'HEALTH.INP'); Reset(Input);
    Assign(Output, 'HEALTH.OUT'); Rewrite(Output);
    readln(n);
    Fillchar(C, sizeof(C), 0);
    For i:=1 to n do
    Begin
        read(A[i]);
        Inc(C[A[i]]);
    End;
    Ans := -1;
    Temp := 174147147;
    For i:=1 to n do
    Begin
        k := A[i];
        if (C[k] > 1) then continue;
        if (k < Temp) then
        Begin
            Temp := k;
            Ans := i;
        End;
    End;
    writeln(Ans);
    Close(Input); Close(Output);
End.
