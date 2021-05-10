#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        int sa=0,an=0;
        string s;
        for(int i=1;i<=n;i++){
            cin>>s;
            if (s[0] == 'Q' || s[0] == 'N'|| s[0] == 'E' || s[0] == 'X'|| s[0] == 'I' || s[0] == 'O' || s[0] == 'U')
                sa+=a;
            else
                an+=b;
        }
        if(sa>an)
        cout<<"SARTHAK"<<endl;
        else if(sa==an)
        cout<<"DRAW"<<endl;
        else
        cout<<"ANURADHA"<<endl;
    }
    return 0;
}