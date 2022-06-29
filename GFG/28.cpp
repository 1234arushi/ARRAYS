//https://practice.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1#

//Two pointer method
       int l,r;
       sort(A,A+n);
       for(int i=0;i<n-2;i++)
       {
           l=i+1;
           r=n-1;
           while(l<r)
           {
               if(A[i]+A[l]+A[r]==X)
               {
                   //cout<<A[i]<<A[l]<<A[r]
                   return true;
               }
               else if(A[i]+A[l]+A[r]>X)
               {
                   r--;
               }
               else
               {
                   l++;
               }
           }
          
           
       }
       return false;
        
        /*my method:
        unordered_map<int,int> umap;
        for(int i=0;i<n;i++)
        {
            int x=A[i];
            for(int j=i+1;j<n;j++)
            {
                int y=A[j];
                int rem = X-(x+y);
                
                if(umap[rem])
                {
                    
                    return true;
                }
               
            }
            umap[A[i]]++;//so that if rem==x or rem==y
            //then it should not consider the element in map
            //as there it's not repeated  
        }
        return false;*/
        //Your Code Here
    }

};

// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}
  // } Driver Code Ends
