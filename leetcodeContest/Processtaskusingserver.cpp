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

vector<int> assignTasks(vector<int> &servers, vector<int> &tasks)
{
    typedef pair<int, pair<int, int>> pi;
    vector<int> ans;
    int n = servers.size();
    int m = tasks.size();
    priority_queue<pi, vector<pi>, greater<pi>> free, running;

    for (int i = 0; i < n; i++)
    {
        free.push(make_pair(0, make_pair(servers[i], i)));
    }

    int current_time = 0;

    for (int i = 0; i < m; i++)
    {
        current_time = max(current_time, i);

        if (free.size() == 0)
        {
            pi top = running.top();
            current_time = top.first;
        }

        while (running.size() > 0 && current_time >= running.top().first)
        {
            pi top = running.top();
            free.push(make_pair(0, make_pair(top.second.first, top.second.second)));
            running.pop();
        }

        pi top = free.top();
        running.push(make_pair(current_time + tasks[i], make_pair(top.second.first, top.second.second)));
        free.pop();

        ans.push_back(top.second.second);
    }

    return ans;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}