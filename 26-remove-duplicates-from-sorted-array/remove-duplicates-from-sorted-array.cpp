class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        int j=0;
        for(auto k:s){
            nums[j]=k;
            j++;
        }
        return s.size();
    }
};