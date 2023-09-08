#include <iostream>
using namespace std;
struct PHANSO {
    int tu, mau;
};
PHANSO A[1001];
int n;
bool xeptruoc(PHANSO a, PHANSO b) {
    if (a.tu * b.mau < a.mau * b.tu) 
        return true;
    else return false;
}
int main()
{
    cin>>n;
    int i,j;
    for (i=1; i<=n; i++) 
        cin>>A[i].tu>>A[i].mau;
    for (i=1; i<n; i++) 
        for (j=i+1; j<=n; j++)
            if (!xeptruoc(A[i],A[j])) 
                swap(A[i], A[j]);
    for (i=1; i<=n; i++)
        cout<<A[i].tu<<" "<<A[i].mau<<endl;
    return 0;
}
