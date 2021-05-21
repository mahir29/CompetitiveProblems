#include <bits/stdc++.h>
using namespace std;
int isPalindrome(string A)
{

    int n = A.length();
    int left = 0, right = n - 1;

    while (left < right)
    {

        char x = A[left];
        char y = A[right];

        if ('A' <= x && x <= 'Z')
            x = tolower(x);

        if ('A' <= y && y <= 'Z')
            y = tolower(y);

        if (!('A' <= x && x <= 'Z') && !('a' <= x && x <= 'z') && !('1' <= x && x <= '9'))
        {
            left++;
            continue;
        }

        if (!('A' <= y && y <= 'Z') && !('a' <= y && y <= 'z') && !('1' <= y && y <= '9'))
        {
            right--;
            continue;
        }

        if (x != y)
            return 0;

        left++;
        right--;
    }

    return 1;
}
