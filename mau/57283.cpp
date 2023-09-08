#include <iostream>
using namespace std;
struct DIEM {
    int x, y;
};
DIEM A[1001];
int n;
bool xeptruoc(DIEM a, DIEM b) {
    int ka = a.x * a.x + a.y * a.y;
    int kb = b.x * b.x + b.y * b.y;
    if (ka < kb || (ka==kb && a.x>b.x)) 
        return true;
    else return false;
}
int main()
{
    cin>>n;
    int i,j;
    for (i=1; i<=n; i++) 
        cin>>A[i].x>>A[i].y;
    for (i=1; i<n; i++) 
        for (j=i+1; j<=n; j++)
            if (!xeptruoc(A[i],A[j])) 
                swap(A[i], A[j]);
    for (i=1; i<=n; i++)
        cout<<A[i].x<<" "<<A[i].y<<endl;
    return 0;
}
