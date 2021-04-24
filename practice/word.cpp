#include<bits/stdc++.h>
using namespace std;

int main(){
   string s;
   cin>>s;
   int u=0,l=0;
   for(int i=0;i<s.length();i++){
       if(isupper(s[i])){
           u++;
       }
       else{
           l++;
       }
   }
   if(u>l){
       for(int i=0;i<s.length();i++){
       transform(s.begin(), s.end(), s.begin(), ::toupper);
   }
   }
   else{
       for(int i=0;i<s.length();i++){
       transform(s.begin(), s.end(), s.begin(), ::tolower);
   }
   }
   cout<<s<<endl;
    return 0;
}