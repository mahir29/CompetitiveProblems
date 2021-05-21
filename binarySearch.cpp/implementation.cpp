#include<bits/stdc++.h>
using namespace std;


int binarySearch(vector<int> a,int n){
     int start=0;
     int end=a.size()-1;
     
     while(start<=end){
        int mid=(start+end)/2;

        if(a[mid]==n)
        return mid;
        else if(a[mid]<n){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
     }

     return -1;
}