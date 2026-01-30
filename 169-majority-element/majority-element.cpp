class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size=nums.size()/2;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int count=1;
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    count++;
                }else{
                    break;
                }
            }
            if(count>size){
                return nums[i];
            }
        }
        return -1;
    }
};