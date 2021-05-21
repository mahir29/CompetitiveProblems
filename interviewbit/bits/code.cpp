#include <bits/stdc++.h>
using namespace std;

//------------------------------------------------------------------------------------------

int numSetBits(unsigned int A)
{

    int count = 0;
    while (A > 0)
    {
        count += A & 1;
        A >>= 1;
    }

    return count;
}

//------------------------------------------------------------------------------------------

int countBits(unsigned int A)
{                              // Brian Kernighan’s Algorithm
    int count = 0;
    while (A > 0)
    {
        A = A & (A - 1);
        count++;
    }

    return count;
}

//------------------------------------------------------------------------------------------

int findMinXor(vector<int> &A)
{
    int res = INT_MAX;
    sort(A.begin(), A.end());
    for (int i = 0; i < A.size() - 1; i++)
    {
        res = min(res, A[i] ^ A[i + 1]);
    }
    return res;
}

//------------------------------------------------------------------------------------------

int findMinXor(vector<int> &A)
{
    int res = INT_MAX;
    sort(A.begin(), A.end());
    for (int i = 0; i < A.size() - 1; i++)
    {
        res = min(res, A[i] ^ A[i + 1]);
    }
    return res;
}

//------------------------------------------------------------------------------------------

unsigned reverse(unsigned int A)
{

    unsigned int B = 0, temp = 0;

    for (int i = 0; i < 32; i++)
    {
        temp = (A & (1 << i));
        if (temp)
            B |= (1 << (31 - i));
    }
    return B;
}

//------------------------------------------------------------------------------------------

int singleNumber(const vector<int> &A) {
    
    int res=0;
    
    int sum=0,x,temp;
    
    for(int i=0;i<32;i++){
        sum=0;
        x=1<<i;
        
        for(int j=0;j<A.size();j++){
            temp=A[j]&x;
            if(temp)
            sum++;
        }
        
        if(sum%3!=0)
        res|=x;
    }
    
    return res;
}
