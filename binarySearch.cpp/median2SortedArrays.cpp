#include <bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(const vector<int> &A, const vector<int> &B)
{

    int m = A.size();
    int n = B.size();

    if(m>n)
    return findMedianSortedArrays(B,A);

    int low=0;
    int high=m;

    while(low<=high){
        int partX=(low+high)/2;
        int partY=(m+n+1)/2-partX;

        int maxLeftX=(partX==0)?INT_MIN:A[partX-1];
        int maxLeftY=(partY==0)?INT_MIN:B[partY-1];

        int minRightX=(partX==m)?INT_MAX:A[partX];
        int minRightY=(partY==n)?INT_MAX:B[partY];

        if(maxLeftX<=minRightY && maxLeftY<=minRightX){
            if((m+n)%2==0)
            return 1.0*(max(maxLeftX,maxLeftY)+min(minRightX,minRightY))/2.0;
            else
            return 1.0*max(maxLeftX,maxLeftY);
        }
        else if(maxLeftX>minRightY)
        high=high+1;
        else
        low=low-1;
    }

    return -1.0;
}