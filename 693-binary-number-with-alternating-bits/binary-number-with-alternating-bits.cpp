class Solution {
public:
    bool hasAlternatingBits(int n) {
        string binary="";
        while(n>0){
            binary=char('0'+(n%2))+binary;
            n/=2;
        }
        for(int i=0;i<binary.length()-1;i++){
            if(binary[i]==binary[i+1]){
                return false;
            }
        }
        return true;
    }
};