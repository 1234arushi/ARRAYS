//https://leetcode.com/problems/contains-duplicate-ii/
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        //try another sol!!!!!!
        
        
        //TC->O(N)  SC->O(N)
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            if(m.count(nums[i])==0)
            {
                m[nums[i]]=i;
            }
            else if(i-m[nums[i]]<=k)
            {
                return true;
            }
            else
            {
                m[nums[i]]=i;//include it in map cuz what if this
                              //val will give <=k for some new i
            }
            
        }
        return false;
       
        
    }
};
