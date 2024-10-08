//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int evenlyDivides(int N) {
        int count = 0;
        int temp = N;
        
        while (temp > 0) {
            int digit = temp % 10;
            
            // Check if digit is not zero and divides N evenly
            if (digit != 0 && N % digit == 0) {
                count++;
            }
            
            temp /= 10;  // Move to the next digit
        }
        
        return count;
    }
};



//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends