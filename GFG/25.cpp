//https://leetcode.com/problems/find-the-duplicate-number/submissions/
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> umap;
        for(int i=0;i<nums.size();i++)
        {
            umap[nums[i]]++;
        }
        unordered_map<int,int>::iterator itr;
        for(itr=umap.begin();itr!=umap.end();itr++)
        {
            if(itr->second>1)
            {
                return itr->first;
            }
        }
        return 0;
        
        
    }
};
