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

int findPar(int node, vector<int> &parent)
{
    if (node == parent[node])
    {
        return node;
    }
    return parent[node] = findPar(parent[node], parent);
}

bool comp(vector<int> u, vector<int> v)
{
    if (u[2] < v[2])
        return true;
    return false;
}

void unionn(int a, int b, vector<int> &parent, vector<int> &rank)
{
    a = findPar(a, parent);
    b = findPar(b, parent);
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

int solve(int A, vector<vector<int>> &B)
{

    sort(B.begin(), B.end(), comp);
    vector<int> rank(A, 0);
    vector<int> parent(A);

    for (int i = 0; i < A; i++)
    {
        parent[i] = i;
    }

    int cost = 0;

    for (auto it : B)
    {

        if (findPar(it[0] - 1, parent) != findPar(it[1] - 1, parent))
        {
            cost += it[2];
            unionn(it[0] - 1, it[1] - 1, parent, rank);
        }
    }

    return cost;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}