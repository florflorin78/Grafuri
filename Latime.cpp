#include<iostream>
using namespace std;

int main() {
int nod,i,j,a[100][100],coada[100],s[100],n;
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
int ic=0,sc=0;
coada[ic]=nod;
cout<<coada[ic]<<" ";
s[nod]=1;
while(ic<=sc) {
    for(int i=1;i<=n;i++)
        if(a[coada[ic]][i]&&!s[i]) {
            sc++;
            coada[sc]=i;
            cout<<coada[sc]<<" ";
            s[i]=1;
        }
        ic++;
}   
}