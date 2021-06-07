#include<bits/stdc++.h>
using namespace std;

#define int long long
#define ull unsigned long long
#define vi vector<int>
#define vs vector<string>
#define pii pair<int,int>
#define vp vector<pii>
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
#define mii map<int,int>
#define w(x) int x; cin>>x; while(x--)

int colorful(int A) {
    
   vector<int> arr;
   set<int> s;
   
    while(A)
    {
    arr.push_back(A%10);
    A=A/10;
    }
    
    for(int i=0;i<arr.size();i++)
    {
        if(s.find(arr[i])!=s.end())
        {
            return 0;
        }
        s.insert(arr[i]);
        
    }
    for(int i=0;i<arr.size();i++)
    {
        int mul=arr[i];
        for(int j=i+1;j<arr.size();j++)
        {
                mul=mul*arr[j];   
                if(s.find(mul)!=s.end()) {
                   return 0;
    
                s.insert(mul);
        }
    
        }
    }
    return 1;
    }

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}