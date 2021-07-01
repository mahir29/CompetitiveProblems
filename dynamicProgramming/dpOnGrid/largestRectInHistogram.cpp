#include <bits/stdc++.h>
using namespace std;

//stack sores the index of leftmost limit such that its length is less than bar
//stack is empty that means bar has no left limit
//stack will store the indexes
//if left element is less than the elemet pop it out
//else our left is top of the stack+1 and push that index in the stack
// do the same process for right but move from right for this
//no of bars=right-left+1;
//area=ht of bar*no of bars

int largestRectangleArea(vector<int> &height, int n)
{
    vector<int> left(n), right(n);
    stack<int> s;

    for (int i = 0; i < n; i++)
    { //find the left limit for each bar
        if (s.empty())
        {
            left[i] = 0;
            s.push(i);
        }
        else
        {
            while (!s.empty() && height[s.top()] >= height[i])
            {
                s.pop();
            }
            left[i] = s.empty() ? 0 : s.top() + 1;
            s.push(i);
        }
    }

    while (!s.empty())
    { //empty the stack
        s.pop();
    }

    for (int i = 0; i < n; i++)
    { //find the right limit for each bar
        if (s.empty())
        {
            right[i] = n - 1;
            s.push(i);
        }
        else
        {
            while (!s.empty() && height[s.top()] >= height[i])
            {
                s.pop();
            }
            right[i] = s.empty() ? n - 1 : s.top() + 1;
            s.push(i);
        }
    }

    //find the max rectagle area
    int area;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        area = (right[i] - left[i] + 1) * height[i];
        ans = max(ans, area);
    }

    return area;
}