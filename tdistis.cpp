#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll x,y;
        cin>>x>>y;
        ll n=1;
        while(n*n<x+y)
        n++;
        if(n*n!=x+y){
            cout<<"NO"<<endl;
            continue;
        }
        if(n==1){
            if(x==1){
                cout<<"YES"<<endl;
                cout<<"1"<<endl;
            }
            else
            cout<<"NO"<<endl;
            continue;
        }
        ll pos,even=1,odd=n-1;
        bool res=0;
        for(int i=1;i<n;i++){
            pos=even*odd*2;
            if(pos==y){
                res=1;
                break;
            }
            even++;
            odd--;
        }
        if(!res){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<n<<endl;
        for(int i=1;i<=odd;i++){
            cout<<"1"<<" "<<i+1<<endl;
        }
        for(int i=1;i<even;i++){
            cout<<"2"<<" "<<odd+i+1<<endl;
        }

    }
    return 0;
}
 