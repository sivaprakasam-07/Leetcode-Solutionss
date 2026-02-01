class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> positive;
        vector<int> negative;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                negative.push_back(nums[i]);
            }else{
                positive.push_back(nums[i]);
            }
        }
        vector<int> ans(nums.size());
        int p=0, n=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                ans[i]=positive[p++];
            }else{
                ans[i]=negative[n++];
            }
        }
        return ans;
    }
};