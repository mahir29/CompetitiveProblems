#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.length()<=10){
            cout<<s<<endl;
            continue;
        }
        int n=s.length();
        cout<<s[0]<<(n-2)<<s[n-1]<<endl;


    }
   
    return 0;
}