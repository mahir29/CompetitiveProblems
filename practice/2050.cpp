#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x=0,k=0;
        if(n<205){
            cout<<"-1"<<endl;
            continue;
        }
        else if(n==205){
            cout<<"1"<<endl;
            continue;
        }
        int i=n;
        while(i>0){
            x+=floor(n/(2050*pow(10,k)));
            i-=(x*(2050*pow(10,k)));
            k++;
        }
        if(x==n)
        cout<<"x"<<endl;
        else
        cout<<"-1"<<endl;
    }
    return 0;
}