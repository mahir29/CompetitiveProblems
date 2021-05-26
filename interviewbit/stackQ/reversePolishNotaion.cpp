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

int evalRPN(vector<string> &A) {
    
    stack<string> a;
    
    for(int i=0;i<A.size();i++){
        if(A[i]!="+" && A[i]!="*" && A[i]!="/" && A[i]!="-" )
        a.push(A[i]);
        else{
            int y=stoi(a.top());
            a.pop();
            int x=stoi(a.top());
            a.pop();
            switch(A[i][0]) {
                case '+':  a.push(to_string(x + y));break;
                case '-':  a.push(to_string(x - y));break;
                case '*':  a.push(to_string(x * y));break;
                case '/':  a.push(to_string(x / y));break;
            }
        }
    }
    
    return stoi(a.top());
    
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}