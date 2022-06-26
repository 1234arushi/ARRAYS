//https://practice.geeksforgeeks.org/problems/array-of-alternate-ve-and-ve-nos1401/1
// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    vector<int> v1;
	    vector<int> v2;
	    
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>=0)
	        {
	           v1.push_back(arr[i]);
	        }
	        else
	        {
	            v2.push_back(arr[i]);
	        }
	    }
	    int i=0,j=0,k=0;
	    int len1=v1.size();
	    int len2=v2.size();
	    while(k<n)
	    {
	        if(i<len1)
	        {
	            arr[k++]=v1[i++];
	        }
	        if(k<n)
	        {
	            if(j<len2)
	            {
	                arr[k++]=v2[j++];
	            }
	        }
	    }
	    
