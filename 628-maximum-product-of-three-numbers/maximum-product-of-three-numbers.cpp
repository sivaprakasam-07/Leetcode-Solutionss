class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        // int n=nums.size();
        int option1=nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3];
        int option2=nums[0]*nums[1]*nums[nums.size()-1];

        return max(option1,option2);
    }
};