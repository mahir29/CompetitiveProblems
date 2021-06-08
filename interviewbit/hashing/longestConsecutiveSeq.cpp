#include<bits/stdc++.h>
using namespace std;


#define ull unsigned long long
#define vi vector<int>
#define vs vector<string>
#define pii pair<int,int>
#define vp vector<pii>
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
#define mii map<int,int>
#define w(x) int x; cin>>x; while(x--)

//find size of Longest subsequence of consecutive elements in the array

int longestConsecutive(const vector<int> &A) {
    priority_queue<int, vector<int>, greater<int> > pq;
    int N=A.size();
    for (int i = 0; i < N; i++) {
       
        // adding element from
        // array to PriorityQueue
        pq.push(A[i]);
    }
 
    // Storing the first element
    // of the Priority Queue
    // This first element is also
    // the smallest element
    int prev = pq.top();
    pq.pop();
 
    // Taking a counter variable with value 1
    int c = 1;
 
    // Storing value of max as 1
    // as there will always be
    // one element
    int max = 1;
    while (!pq.empty()) {
       
        // check if current peek
        // element minus previous
        // element is greater then
        // 1 This is done because
        // if it's greater than 1
        // then the sequence
        // doesn't start or is broken here
        if (pq.top() - prev > 1) {
           
            // Store the value of counter to 1
            // As new sequence may begin
            c = 1;
 
            // Update the previous position with the
            // current peek And remove it
            prev = pq.top();
            pq.pop();
        }
 
        // Check if the previous
        //  element and peek are same
        else if (pq.top() - prev == 0) {
           
            // Update the previous position with the
            // current peek And remove it
            prev = pq.top();
            pq.pop();
        }
       
        // If the difference
        // between previous element and peek is 1
        else {
           
            // Update the counter
            // These are consecutive elements
            c++;
 
            // Update the previous position
            //  with the current peek And remove it
            prev = pq.top();
            pq.pop();
        }
       
        // Check if current longest
        // subsequence is the greatest
        if (max < c) {
           
            // Store the current subsequence count as
            // max
            max = c;
        }
    }
    return max;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}