#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:

    vector<int> shortestDist(int src,int v,vector<pair<int,int>> adj[]){

        vector<int> dist(v+1,1e18);
        dist[src]=0;

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;

        pq.push(make_pair(0,src));

        while(!pq.empty()){
            int dis=pq.top().first;
            int node=pq.top().second;
            pq.pop();

            for(auto it:adj[node]){
                if(dist[node]+it.second<dist[it.first]){
                    dist[it.first]=dist[node]+it.second;
                    pq.push(make_pair(dist[it.first],it.first));
                }
            }

        }

        return dist;
    }
};

int main()
{
    int u, v, w;
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> adj[n + 1];
    for (int i = 1; i <= m; i++)
    {
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
    }
    Solution S;
    vector<int> B = S.shortestDist(0, n, adj);
    return 0;
}