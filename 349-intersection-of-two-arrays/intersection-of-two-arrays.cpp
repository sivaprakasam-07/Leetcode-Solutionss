class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        unordered_set<int> set1(nums1.begin(),nums1.end());
        unordered_set<int> set2(nums2.begin(),nums2.end());
        if(set1.size()>set2.size()){
            swap(set1,set2);
        }

        for(auto x:set1){
            if(set2.count(x)){
                result.push_back(x);
            }
        }
        return result;
    }
};