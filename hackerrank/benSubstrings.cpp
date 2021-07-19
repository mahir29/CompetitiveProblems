#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin>>n;
   vector<int> a(n);
   for(int i=0;i<n;i++) cin>>a[i];
   sort(a.begin(),a.end());
   int cnt=0;
   for(int i=0;i<n-2;i++){
       for(int j=i+1;j<n-1;j++){
           int k=a[j]-a[i];
           int u=lower_bound(a.begin()+j+1,a.end(),k)-a.begin();
           int o=upper_bound(a.begin()+j+1,a.end(),2*k)-a.begin();
           cnt+=(o-u);
       }
   }
   cout<<cnt<<endl;
   return 0;
}