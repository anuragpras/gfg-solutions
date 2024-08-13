//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends




// Function to find square root
// x: element to find square root
class Solution {
  public:
    long long int floorSqrt(long long int n) {
        // Your code goes here
        long long int lo=0, hi=(n+1)/2, mid;
        long long int ans=0;
        while(lo<=hi){
            mid=lo+(hi-lo)/2;
            if(mid*mid==n) return mid;
            else if(mid*mid>n) hi=mid-1;
            else{
                lo=mid+1;
                ans=mid;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        Solution obj;
        cout << obj.floorSqrt(n) << endl;
    }
    return 0;
}

// } Driver Code Ends