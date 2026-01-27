class Solution {
public:
    int singleNumber(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int count=0;
            int single=nums[i];
            for(int j=0;j<nums.size();j++){
                if(nums[j]==single){
                    count++;
                }
            }
            if(count==1){
                return single;
            }
        }
        return -1;
    }
};