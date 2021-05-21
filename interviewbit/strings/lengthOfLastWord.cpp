#include<bits/stdc++.h>
using namespace std;
int lengthOfLastWord(const string A) {
    int n=A.size();
    int x=0;
    for(int i=n-1;i>=0;i--){
        if(A[i]==' ' && x!=0)
            break;
        else if(A[i]!=' '){
            x++;
        }
    }
    
    return x;
}