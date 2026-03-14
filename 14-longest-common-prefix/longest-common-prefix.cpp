class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string base=strs[0];
        string result="";
        for(int i=0;i<base.length();i++){
            for(string word:strs){
                if(i>=word.length() || word[i]!=base[i]){
                    return result;
                }
            }
            result+=base[i];
        }
        return result;
    }
};