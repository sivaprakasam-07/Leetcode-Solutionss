class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> freq;
        vector<int> ans;
        for(int x:nums){
            freq[x]++;
        }
        for(auto it:freq){
            if(it.second>n/3){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};