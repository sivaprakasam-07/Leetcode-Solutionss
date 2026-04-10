class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for(int i=0;i<nums.size();i++){
            int fir=nums[i];
            int more=target-fir;
            if(mp.find(more)!=mp.end()){
                return {mp[more],i};
            }
            mp[fir]=i;
        }
        return {};
    }
};