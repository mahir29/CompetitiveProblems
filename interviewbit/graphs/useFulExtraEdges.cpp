#include<bits/stdc++.h>
using namespace std;

#define int long long
#define ull unsigned long long
#define vi vector<int>
#define vs vector<string>
#define pii pair<int,int>
#define vp vector<pii>
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
#define mii map<int,int>
#define w(x) int x; cin>>x; while(x--)

vector<vector<pair<int,int>>> adj(1e6);
int n;
const int INF = 1000000000;
int dj(int s,int des,vector<int> &d,vector<int> &p){
    d.assign(n,INF);
    p.assign(n,-1);
    d[s]=0;
    priority_queue<pii, vector<pii>, greater<pii>> q;
    q.push({0, s});
    while (!q.empty()) {
        int v = q.top().second;
        int d_v = q.top().first;
        q.pop();
        if (d_v != d[v])
            continue;

        for (auto edge : adj[v]) {
            int to = edge.first;
            int len = edge.second;

            if (d[v] + len < d[to]) {
                d[to] = d[v] + len;
                p[to] = v;
                q.push({d[to], to});
            }
        }
    }
    return d[des];
    
}

int solve(int A, vector<vector<int> > &B, int C, int D, vector<vector<int> > &E) {
    
    n=A;
    C--;
    D--;
    for(int i=0;i<A;i++){
        adj[i].clear();
    }
    int ans=INF;
    vector<int> d;
    vector<int> p;
    for(int i=0;i<B.size();i++){
        adj[B[i][0]-1].push_back({B[i][1]-1,B[i][2]});
        
    }
    for(int i=0;i<E.size();i++){
        adj[E[i][0]-1].push_back({E[i][1]-1,E[i][2]});
        adj[E[i][1]-1].push_back({E[i][0]-1,E[i][2]});
        ans=min(ans,dj(C,D,d,p));
        d.clear();
        p.clear();
        adj[E[i][0]-1].pop_back();
        adj[E[i][1]-1].pop_back();
    }
    if(ans==INF)return -1;
    return ans;
    
    
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}