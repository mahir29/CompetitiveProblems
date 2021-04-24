#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int j=0,k=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1')
        k++;
    }
    if(k==s.length()){
        for(int i=0;i<s.length()-1;i++){
        
            cout<<s[i];
    
    }
    }
    else{
        for(int i=0;i<s.length();i++){
        if(s[i]=='0' && j==0){
            j=1;
        }
        else{
            cout<<s[i];
        }
    }
    }
    return 0;

}