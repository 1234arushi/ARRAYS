//https://practice.geeksforgeeks.org/problems/quick-sort/1
// { Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

 // } Driver Code Ends
class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        if(low<high)
        {
            int loc=partition(arr,low,high);//is it bcz partition a public fun
                                            //i.e y no declaration required
            quickSort(arr,low,loc-1);
            quickSort(arr,loc+1,high);
        }
        // code here
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
        int pivot=arr[low];
        int start=low;
        int end=high;
        while(start<end)
        {
            while(arr[start]<=pivot)
            {
                start++;
            }
            while(arr[end]>pivot)
            {
                end--;
            }
            if(start<end)
            {
                swap(arr[start],arr[end]);
            }
        }
        swap(arr[low],arr[end]);
        return end;
       // Your code here
    }
};


// { Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      Solution ob;
    ob.quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}  // } Driver Code Ends
