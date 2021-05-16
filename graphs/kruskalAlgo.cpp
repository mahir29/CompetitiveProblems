#include <bits/stdc++.h>
using namespace std;

struct node
{
    int u;
    int v;
    int w;
    node(int first, int second, int third)
    {
        u = first;
        v = second;
        w = third;
    }
};

bool comp(node a, node b)
{
    return a.w < b.w;
}

int findPar(int node, vector<int> &parent)
{
    if (node == parent[node])
        return node;

    return parent[node] = findPar(parent[node], parent); //path
}

void unionn(int a, int b, vector<int> &parent, vector<int> &rank)
{
    a = findPar(a,parent);
    b = findPar(b,parent);
    if (rank[a] < rank[b])
        parent[a] = b;
    else if (rank[b] < rank[a])
        parent[b] = a;
    else
    {
        parent[b] = a;
        rank[a]++;
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    int u, v, w;
    vector<node> edges;
    for (int i = 1; i <= m; i++)
    {
        cin >> u >> v >> w;
        edges.push_back(node(u, v, w));
    }

    sort(edges.begin(), edges.end(), comp);

    vector<int> rank(n , 0);

    vector<int> parent(n );

    for (int i = 0; i <n; i++) //initialise parent with element itself
    {
        parent[i] = i;
    }

    int cost=0; // to store total sum of edge weight
    vector<pair<int,int>> mst; //to store the info of n-1 edges of minimum spanning tree

    for (auto it : edges)
    {
        if (findPar(it.u, parent) != findPar(it.v, parent)) // to check if two elements do not belong to same component of mst
        {
            cost+=it.w;
            mst.push_back({it.u,it.v});
            unionn(it.u, it.v, parent, rank);
        }
    }

    cout<<"Cost is"<<cost<<endl;
    for(auto it:mst){
        cout<<it.first<<" "<<it.second<<endl;
    }

    return 0;
}
