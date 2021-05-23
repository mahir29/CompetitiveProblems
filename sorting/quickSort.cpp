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

int partition(vi &v, int s, int e)
{
    int pivot=v[s];
    int ptr=s+1;
    for(int i=s+1;i<e;i++){
        if(v[i]<v[s]){
            swap(v[i],v[ptr]);
            ptr++;
        }
    }
    swap(v[s],v[ptr-1]);

    return ptr-1;
}

void quickSort(vi &v, int s, int e)
{
    if (s >= e)
        return;
    int pivot=partition(v,s,e);
    quickSort(v, s, pivot-1);
    quickSort(v, pivot+1, e);
   
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vi v = {3, 2, 4, 8, 5, 9, 1};

    quickSort(v, 0, v.size());

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    //Write your code here

    return 0;
}