#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ull unsigned long long
#define vi vector<int>
#define vs vector<string>
#define pii pair<int, int>
#define vp vector<pii>
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define mii map<int, int>
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)

struct UndirectedGraphNode
{
    int label;
    vector<UndirectedGraphNode *> neighbors;
    UndirectedGraphNode(int x) : label(x){};
    
};

    UndirectedGraphNode *cloneGraph(UndirectedGraphNode *graph)
{
    if (!graph)
        return NULL;

    map<UndirectedGraphNode *, UndirectedGraphNode *> map;
    queue<UndirectedGraphNode *> q;
    q.push(graph);

    UndirectedGraphNode *graphCopy = new UndirectedGraphNode(graph->label);
    map[graph] = graphCopy;

    while (!q.empty())
    {
        UndirectedGraphNode *node = q.front();
        q.pop();
        int n = node->neighbors.size();
        for (int i = 0; i < n; i++)
        {
            UndirectedGraphNode *neighbor = node->neighbors[i];
            // no copy exists
            if (map.find(neighbor) == map.end())
            {
                UndirectedGraphNode *p = new UndirectedGraphNode(neighbor->label);
                map[node]->neighbors.push_back(p);
                map[neighbor] = p;
                q.push(neighbor);
            }
            else
            { // a copy already exists
                map[node]->neighbors.push_back(map[neighbor]);
            }
        }
    }

    return graphCopy;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}