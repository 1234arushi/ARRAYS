//https://www.codechef.com/submit/BROKPHON?tab=statement


#include <bits/stdc++.h>
using namespace std;

int main() {
    
    
    //Method 3:vectors
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }
        vector<bool> check(N,false);
        for(int i=0;i<N-1;i++)
        {
            if(A[i]!=A[i+1])
            {
                check[i]=true;
                check[i+1]=true;
            }
        }
        int count=0;
        for(int i=0;i<N;i++)
        {
            if(check[i]==true)
            {
                count++;
            }
        }
        cout<<count<<"\n";
        
    }
    return 0;
    
    
    //Method 2:
    /*int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }
        set<int> s;
        int i=0;
        if(A[0]!=A[i+1])
        {
            s.insert(0);
            s.insert(i+1);

        }
        for(int i=1;i<N;i++)
        {
            if(A[i]!=A[i-1])
            {
                s.insert(i);
                s.insert(i-1);
                
            }
            
        }
        cout<<s.size()<<"\n";
    }
    return 0;*/
    
    //Method 1:
    /*int T;
    cin>>T;//no. of test cases
    while(T--)
    {
        int N;
        cin>>N;//no. of players
        int A[N];
        for(int i=1;i<=N;i++)
        {
            cin>>A[i];
        }
        int count=0;
        for(int i=1;i<=N;i++)
        {
            if(i>1)
            {
                if(A[i]!=A[i-1])
                {
                    count++;
                    continue;
                }
            }
            if(i<N)
            {
                if(A[i]!=A[i+1])
                {
                    count++;
                }
            }
        }
        
        cout<<count<<"\n";
        
    }
    
	
	return 0;*/
}
