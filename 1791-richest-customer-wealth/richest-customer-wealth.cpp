class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max=0;
        for(int i=0;i<accounts.size();i++){
            int rowSum=0;
            for(int j=0;j<accounts[i].size();j++){
                rowSum+=accounts[i][j];
        }if(rowSum>max){
            max=rowSum;
        }
        }
        return max;
    }
};