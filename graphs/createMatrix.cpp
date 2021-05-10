#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m,u,v;
        cin>>n>>m;
        int adj[n+1][n+1];
        while(m--){
            cin>>u>>v;
            adj[u][v]=1;
            adj[v][u]=1;
        }
    }
    return 0;
}