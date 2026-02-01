class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size());
        int pos_index=0,neg_index=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                ans[neg_index]=nums[i];
                neg_index+=2;
            }else{
                ans[pos_index]=nums[i];
                pos_index+=2;
            }
        }
        return ans;
    }
};