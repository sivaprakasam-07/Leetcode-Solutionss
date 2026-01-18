// class Solution {
// public:
//     vector<int> findDisappearedNumbers(vector<int>& nums) {
//         int n=nums.size();
//         vector<int> miss;
//         vector<bool> seen(n+1, false);

//         for(int x:nums){
//             seen[x]=true;
//         }
//         for(int i=1;i<=n;i++){
//             if(!seen[i]){
//                 miss.push_back(i);
//             }
//         }
//         return miss;
//     }
// };


class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;

        for (int i = 0; i < n; i++) {
            int idx = abs(nums[i]) - 1;
            if (nums[idx] > 0) {
                nums[idx] = -nums[idx];
            }
        }

        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                ans.push_back(i + 1);
            }
        }

        return ans;
    }
};
