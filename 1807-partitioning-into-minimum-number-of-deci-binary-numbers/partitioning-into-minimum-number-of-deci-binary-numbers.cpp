// class Solution {
// public:
//     int minPartitions(string n) {
//         int maxDigit=n[0]-'0';
//         for(int i=1;i<n.length();i++){
//             int digit=n[i]-'0';
//             maxDigit=max(maxDigit,digit);
//         }
//         return maxDigit;
//     }
// };

class Solution {
public:
    int minPartitions(string n) {
        int maxDigit = n[0] - '0';
        
        if(maxDigit == 9) return 9;

        for(int i = 1; i < n.length(); i++){
            int digit = n[i] - '0';
            
            if(digit == 9) return 9;

            maxDigit = max(maxDigit, digit);
        }
        
        return maxDigit;
    }
};