#include <iostream>
using namespace std;

string s,l2,l11[1001],tong,hs,gt[10];

string cong(string a, string b) {
  int i,j,so,nho;
  string s="";
  i=a.length();
  j=b.length();
  nho=0;
  while (i>0||j>0) {
    so=0;
    if (i>0) {
      i--;
      so+=(a[i]-48);
    }
    if (j>0) {
      j--;
      so+=(b[j]-48);
    }
    so+=nho;
    if (so>=10) {
      so%=10;
      nho=1;
    }
    else
      nho=0;
    s=char(so+48)+s;
  }
  if (nho==1)
    s='1'+s;
  return s;
}

string nhan(string a, int b) {
  int i,so,nho;
  string s="";
  i=a.length();
  nho=0;
  while (i>0) {
    i--;
    so=(a[i]-48)*b+nho;
    s=char(so%10+48)+s;
    nho=so/10;
  }
  if (nho>0)
    s=char(nho+48)+s;
  return s;
}

string kq(string a, string b) {
  int j;
  string s="",c="",sav;
  j=b.length();
  while (j>0) {
    j--;
    sav=nhan(a,b[j]-48)+c;
    c+='0';
    s=cong(s,sav);
  }
  return s;
}

int main() 
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL); cout.tie(NULL);
    int len,i;
    cin >> s;
    len=s.length()-1;
    l2="1";
    l11[len]="1";
    for (i=len-1; i>=0; i--)
      l11[i]=kq(l11[i+1],"11");
    gt[s[0]-48]=l11[0];
    for (i=1; i<=len; i++) {
      l2=nhan(l2,2);
      hs=kq(l11[i],l2);
      gt[s[i]-48]=cong(gt[s[i]-48],hs);
    }
    for (i=0; i<=9; i++) {
      if (gt[i]!="")
        tong=cong(tong,nhan(gt[i],i));
    }
    cout << tong;
    return 0;
}
