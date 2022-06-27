//https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1#
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        
        //TC: O(n log n)        
        sort(a.begin(),a.end());//nlog n time 
        int min_diff=INT_MAX;
        for(int i=0;i+m-1<n;i++)//n time
        {
            int diff=a[i+m-1]-a[i];
            if(diff<min_diff)
            {
                min_diff=diff;
                
            }
            //mindiff=min(mindiff,a[i+m-1]-a[i]);why min() didnt work
            
            
        }
        return min_diff;
    //code
    
    }   
};

// { Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}  // } Driver Code Ends
