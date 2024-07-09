//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    // Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int> arr, int n, long long s) {
        int left = 0;
        long long currentSum = 0;
        
        for (int right = 0; right < n; right++) {
            // Add the current element to the sum
            currentSum += arr[right];
            
            // If the sum exceeds s, shrink the window from the left
            while (currentSum > s && left < right) {
                currentSum -= arr[left];
                left++;
            }
            
            // If we found a subarray with sum s, return the indices
            if (currentSum == s) {
                return {left + 1, right + 1}; // 1-based indexing
            }
        }
        
        // If no subarray found, return {-1}
        return {-1};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long s;
        cin >> n >> s;
        vector<int> arr(n);
        // int arr[n];
        const int mx = 1e9;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        vector<int> res;
        res = ob.subarraySum(arr, n, s);

        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends