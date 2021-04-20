#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k,m,ans,res=0;
        cin>>n>>k;
       int x=pow(2,k)-1;
        while(x>=n){
            x=pow(2,k)-1;
            ans=x;
            k=n;
            while(m>0){
                ans = (ans&x);
                if(ans==0)
                m--;
                else
                break;
                x--;
            }
            if(k==n)
            res++;
        }
        cout<<res%1000000007<<endl;

    }
    return 0;
}
 