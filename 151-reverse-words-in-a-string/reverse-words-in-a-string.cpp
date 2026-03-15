class Solution {
public:
    string reverseWords(string s) {
        stack<string>st;
        string temp="";
        for(int i=0;i<s.length();i++){
            if(s[i]!=' '){
                temp+=s[i];
            }else{
                if(temp!=""){
                    st.push(temp);
                    temp="";
                }
            }
        }
        if(temp!=""){
            st.push(temp);
        }
        string result="";
        while(!st.empty()){
            result+=st.top();
            st.pop();
            if(!st.empty()){
                result+=" ";
            }
        }
        return result;
    }
};