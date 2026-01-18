class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int> miss;
        vector<bool> seen(n+1, false);

        for(int x:nums){
            seen[x]=true;
        }
        for(int i=1;i<=n;i++){
            if(!seen[i]){
                miss.push_back(i);
            }
        }
        return miss;
    }
};