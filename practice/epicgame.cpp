#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    // base case
    if (a == b)
        return a;
  
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

int main(){
    int a,b,n;
    int i=0;
    cin>>a>>b>>n;
    while(n>0){
        if(i%2==0)
        n-=gcd(a,n);
        else
        n-=gcd(b,n);
        i++;
    }
    if(i%2==0)
    cout<<"1"<<endl;
    else 
    cout<<"0"<<endl;
    return 0;
}