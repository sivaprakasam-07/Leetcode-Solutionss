class Solution {
public:
    int minPartitions(string n) {
        int maxDigit=n[0]-'0';
        for(int i=1;i<n.length();i++){
            int digit=n[i]-'0';
            if(maxDigit<digit){
                maxDigit=digit;
            }
        }
        return maxDigit;
    }
};