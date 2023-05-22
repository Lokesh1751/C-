class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
    sort(nums.begin(),nums.end());
    int sol=nums[nums.size()-k];
    return sol;
    }
};
