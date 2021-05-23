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

void merge(vi &v,int s,int mid,int e){
    int p=s;
    int q=mid+1;

    vi A;

    int k=0;
    
    for(int i=s;i<=e;i++){
        if(p>mid){
            A[k++]=v[q++];
        }
        else if(q>e){
            A[k++]=v[p++];
        }
        else if(v[p]<v[q]){
            A[k++]=v[p++];
        }
        else{
            A[k++]=v[q++];
        }
    }
    
}

void mergeSort(vi &v,int s,int e){
    if(s>=e)return;
    int mid=(s+e)/2;
    mergeSort(v,s,mid);
    mergeSort(v,mid+1,e);
    merge(v,s,mid,e);
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vi v={3,2,4,8,5,9,1};

    mergeSort(v,0,v.size());

    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";

    //Write your code here

    return 0;
}