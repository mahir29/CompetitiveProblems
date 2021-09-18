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

int sb(int arr[], int n, int x)
{
    // Your code goes here
    int start = 0;
    int end = 0;

    int min_length = n + 1;
    int current_sum = 0;

    while (end < n)
    {

        while (end < n && current_sum <= x)
        {
            current_sum += arr[end++];
        }

        while (current_sum > x && start < n)
        {

            if (end - start < min_length)
                min_length = end - start;

            current_sum -= arr[start++];
        }
    }

    return min_length;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}