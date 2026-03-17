class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            int f=target-num;
            if(mp.find(f)!=mp.end()){
                return {mp[f],i};
            }
            mp[num]=i;
        }
        return {};
    }
};