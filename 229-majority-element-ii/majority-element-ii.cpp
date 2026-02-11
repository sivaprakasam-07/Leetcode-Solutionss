// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) {
//         int n=nums.size();
//         unordered_map<int,int> freq;
//         vector<int> ans;
//         for(int x:nums){
//             freq[x]++;
//         }
//         for(auto it:freq){
//             if(it.second>n/3){
//                 ans.push_back(it.first);
//             }
//         }
//         return ans;
//     }
// };
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1 = 0, count2 = 0;
        int candidate1 = 0, candidate2 = 1;

        for(int x : nums) {
            if(x == candidate1) {
                count1++;
            }
            else if(x == candidate2) {
                count2++;
            }
            else if(count1 == 0) {
                candidate1 = x;
                count1 = 1;
            }
            else if(count2 == 0) {
                candidate2 = x;
                count2 = 1;
            }
            else {
                count1--;
                count2--;
            }
        }

        count1 = count2 = 0;

        for(int x : nums) {
            if(x == candidate1) count1++;
            else if(x == candidate2) count2++;
        }

        vector<int> ans;

        if(count1 > nums.size()/3) ans.push_back(candidate1);
        if(count2 > nums.size()/3) ans.push_back(candidate2);

        return ans;
    }
};
