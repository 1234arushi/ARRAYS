//https://leetcode.com/problems/merge-intervals/
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        //why sorting:get more detailed explanation
        sort(intervals.begin(),intervals.end());//how 2D vector sorted
        //maybe according to first element if not specified?
       //sort:O(n log n)
        
        vector <vector<int>> merged;
        for(auto interval:intervals)//linear scan of list?-->O(n)
        {
            //what does merged.back()[1] and interval[0] implies which element..confirm
            if(merged.empty()||merged.back()[1]<interval[0])
            {
                merged.push_back(interval);
            }
            else
            {
                merged.back()[1]=max(merged.back()[1],interval[1]);//max necessary?
            }
        }
        //TC:O(n log n)
       // SC:O(log n)-->sorting.Otherwise, we must allocate linear space to
        //store a copy of intervals and sort that.
        
        return merged;
        
        
        /*my approach:runtime error
        vector <vector<int>> v;
        
        for(int i=0;i<intervals.size()-1;i++)
        {
            for(int j=0;j<intervals[i].size()-1;j++)
            {
                if(intervals[i][j]<intervals[i+1][j]<intervals[i][j+1]) 
                {
                    v[i][j]=intervals[i][j];
                    v[i][j+1]=intervals[i+1][j+1];
                  
                }
                else
                {
                    v[i][j]=intervals[i][j];
                    v[i][j+1]=intervals[i][j+1];
                    
                }
                
            }
        }
        return v;*/
        
    }
};
