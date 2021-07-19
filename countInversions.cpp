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

int merge(vi &arr, int s, int mid, int e)
{
    int temp[arr.size()];
    int count = 0;

    int i = s, j = mid, k = 0;

    while (i < mid && j <= e)
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];

            count += (mid - i);
        }
    }

    while (i < mid)
    {
        temp[k++] = arr[i++];
    }

    while (j <= e)
    {
        temp[k++] = arr[j++];
    }

    for (int i = s; i <= e; i++)
    {
        arr[i] = temp[i];
    }

    return count;
}

int mergeSort(vi &arr, int s, int e)
{
    if (s >= e)
        return 0;
    int count = 0;
    int mid = (s + e) / 2;

    count += mergeSort(arr, s, mid);
    count += mergeSort(arr, mid + 1, e);
    count += merge(arr, s, mid + 1, e);

    return count;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}