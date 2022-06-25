//https://www.codechef.com/submit/CFRTEST?tab=statement

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        //Method 2:
        unordered_map<int,int> umap;
        for(int i=0;i<n;i++)
        {
            umap[a[i]]++;
            
        }
        cout<<umap.size()<<"\n";
        //Method 1:
        /*set<int>s;
        for(int i=0;i<n;i++)
        {
            s.insert(a[i]);
            
        }
        cout<<s.size()<<"\n";*/
    }
	// your code goes here
	return 0;
}
