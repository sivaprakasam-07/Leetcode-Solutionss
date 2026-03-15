class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string> v;
        while(ss>>word){
            v.push_back(word);
        }
        reverse(v.begin(),v.end());
        string result="";
        for(auto element:v){
            if(result!=""){
                result+=" ";
            }
            result+=element;
        }
        return result;
    }
};