//https://leetcode.com/problems/find-the-duplicate-number/submissions/
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        //TC:O(N) SC:O(1)
        int tortoise=nums[0];
        int hare=nums[0];
        do
        {
            tortoise=nums[tortoise];//slow ptr->slow+1
            hare=nums[nums[hare]];//fast ptr->fast+2
        }while(tortoise!=hare);
        
        hare=nums[0];
        while(tortoise!=hare)
        {
            tortoise=nums[tortoise];
            hare=nums[hare];
        }
        return hare;
        
        
        //TC:O(N) SC:O(N)
        /*unordered_map<int,int> umap;
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
        return 0;*/
        
        
    }
};
