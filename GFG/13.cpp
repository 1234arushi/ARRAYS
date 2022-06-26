//https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1
// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




 // } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        sort(array.begin(),array.end());
        //i=0 to i<n bcz it contains 1 to N integers both inclusive in the array
        for(int i=0;i<n;i++)//why can't we use i=1,how range is deicded here
        {
            if(array[i]!=(i+1))
            {
                return (i+1);//wh curly braces...not req
            }
        }
        // Your code goes here
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.MissingNumber(array, n) << "\n";
    }
    return 0;
}  // } Driver Code Ends
