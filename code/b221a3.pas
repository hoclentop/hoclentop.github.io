var k,t : Integer;
    m : Byte;
    f,g : Text;
 
Procedure Solve();
Var n : String;
    S,i,X : Integer;
Begin
    Readln(f,n);
    S := 0;
    For i := 1 to Length(n) do
        Inc(S,ord(n[i])-48);
    If (S = m) then
    Begin
        Writeln(g,1);
        Exit();
    End;
    While (S >= 10) do
    Begin
        X := 0;
        While (S > 0) do
        Begin
            Inc(X,S mod 10);
            S := S div 10;
        End;
        S := X;
    End;
    If (S = m) then
        Writeln(g,1)
    else
        Writeln(g,0);
End;
 
Begin
    Assign(f,'CAU3.INP');
    Assign(g,'CAU3.OUT');
    Reset(f);
    Rewrite(g);
    Readln(f,k,m);
    for t := 1 to k do
        Solve();
    Close(g);
End.
