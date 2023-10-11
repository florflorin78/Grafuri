#include<iostream>
using namespace std;

int adancime(int nod) {
    cout<<nod<<" ";
s[nod]=1;
for(i=1;i<=n;i++) 
    if(a[nod][i]&&!s[i]) 
        adancime(i);

}

int main() {
int nod, a[100][100],s[100],n,i,j;
cin>>n;
while(n) {
    cin>>i>>j;
    a[i][j]=1;
    a[j][i]=1;
}
for(i=1;i<=n;i++) {
    for(j=1;j<=n;j++)
    cout<<a[i][j]<<" ";
    cout<<endl;
}
cout<<"Nodul de pornire:";
cin>>nod;
adancime(nod);
}