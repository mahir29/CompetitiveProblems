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

vector<int> spirallyTraverse(vector<vector<int>> matrix, int r, int c)
{
    // code here
    vector<int> ans;
    vector<vector<bool>> seen(0);
    int row[]={0,1,0,0-1};
    int col[]={1,0,-1,0};
    int R=0,C=0,di=0;
    int cr=0,cc=0;

    for(int i=0;i<r*c;i++){
        ans.push_back(matrix[R][C]);
        seen[R][C]=true;
        cr=R+row[di];
        cc=C+col[di];

        if(0<=cr && cr<R && 0<=cc && cc<C && !seen[cr][cc]){
            R=cr;
            C=cc;
        }
        else{
            di=(di+1)%4;
            R += row[di];
            C += col[di];
        }
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