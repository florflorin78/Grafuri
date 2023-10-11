#include<iostream>
using namespace std;

int main() {
int i,j,a[100][100],n;
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
}   