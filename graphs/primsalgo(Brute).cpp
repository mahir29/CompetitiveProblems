#include<bits/stdc++.h>
using namespace std;

int main(){
    int u,v,w,n,m;
    cin>>n>>m;
    vector<pair<int,int>> adj[n];
    for(int i=0;i<m;i++){
        cin>>u>>v>>w;
        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }

    vector<int> key(n,1e18);
    
    vector<bool> mst(n,false);

    vector<int> parent(n,-1);

    key[0]=0;
    parent[0]=-1;

    for(int i=0;i<n-1;i++){  //iterate for n-1 edges and fing u,v pair of each edge of the tree

        int min=INT_MAX,u;

        for(int i=0;i<n;i++){  //first we find the u of the edge
            if(mst[i]==false && key[i]<min){  //find node which is not part of mst and has minimum key
                min=key[i];
                u=v;
            }
        }

        mst[u]=true; //now u is the part of mst

        for(auto it:adj[u]){  //now look for al adjacent nodes of u to find v
        int v=it.first;
        int weight=it.second;
           if(mst[v]==false && weight<key[v]){
               parent[v]=u;
               key[v]=weight;
           }
        }


    }
}