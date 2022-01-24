class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        
        nums[0] += k;
        nums[nums.size()-1] -=k;
        
        
        return nums[nums.size()-1] - nums[0] <= 0 ? 0 : nums[nums.size()-1] - nums[0];
    }
};