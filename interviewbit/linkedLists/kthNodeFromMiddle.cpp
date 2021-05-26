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

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

int solve(ListNode *A, int B)
{
    ListNode *temp = A;
    int n = 0;
    while (A != NULL)
    {
        n++;
        A = A->next;
    }

    int z = (n / 2) + 1 - B;

    if (z <= 0)
        return -1;

    while (z--)
    {
        n = temp->val;
        temp = temp->next;
    }

    return n;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}