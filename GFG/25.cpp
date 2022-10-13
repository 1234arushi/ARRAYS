//https://leetcode.com/problems/merge-intervals/
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>> merged;
        sort(intervals.begin(),intervals.end());//default sort from start time
        //[[1,4],[0,4]]--->i.e sorting is needed
        
        for(auto interval:intervals)
        {
            if(merged.empty()|| merged.back()[1]<interval[0])
            {
                merged.push_back(interval);
            }
            else
            {
                //why we take max :[[1,4],[2,3]]
                merged.back()[1]=max(merged.back()[1],interval[1]);
            }
        }
        return merged;
        
        
    }
};
