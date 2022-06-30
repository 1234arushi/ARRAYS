//https://leetcode.com/problems/minimum-size-subarray-sum/
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        //how do in O(n log n)???
        
        
        //TC->O(n) SC->O(1)
        int start=0;
        int end=0;
        int min_len=INT_MAX;
        int sum=0;
        int n=nums.size();
        while(end<n)//end->iterating over the whole array
        {
            while(sum<target && end<n)
            {
                sum+=nums[end++];
            }
            while(sum>=target && start<n)
            {
                if(end-start<min_len)
                {
                    min_len=end-start;
                }
                sum-=nums[start++];
            }
        }
        return (min_len!=INT_MAX)?min_len:0;
        
        
   
        
        
    }
};
