#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0;i<=n;i++)
    cin>>a[i];
    int sum2=0,sum=(n*(n+1))/2;
    for(int i=0;i<=n;i++)
    sum2+=a[i];
    cout<<(sum2-sum)<<endl;
    return 0;
}