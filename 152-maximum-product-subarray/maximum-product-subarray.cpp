class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int currentMax=nums[0];
        int currentMin=nums[0];
        int globalMax=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]<0){
                swap(currentMax,currentMin);
            }
            currentMax=max(nums[i],currentMax*nums[i]);
            currentMin=min(nums[i],currentMin*nums[i]);
            globalMax=max(globalMax,currentMax);
        }
        return globalMax;
    }
};