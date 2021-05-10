#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int l;
        string s;
        cin>>l>>s;
        int f=1;
        int q;
        while(l>0){
            float z=float(l)/float(2);
            q=0;
            for(int i=0;i<l;i++){
                if(s[i]=='1')
                q++;
            }
            if(q>=z){
                cout<<"YES"<<endl;
                f=0;
                break;
            }
            l--;
        }
        if(f==1)
        cout<<"NO"<<endl;
    }
    return 0;
}