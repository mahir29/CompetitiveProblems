#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> a,b;
    char x[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>x[i][j];
            if(x[i][j]=='*'){
                a.push_back(i);
                b.push_back(j);
            }
        }
    }
    int p=*max_element(a.begin(),a.end());
    int q=*min_element(a.begin(),a.end());
    int r=*max_element(b.begin(),b.end());
    int s=*min_element(b.begin(),b.end());
    for(int i=q;i<=p;i++){
        for(int j=s;j<=r;j++){
            cout<<x[i][j];
        }
        cout<<endl;
    }
    return 0;
}