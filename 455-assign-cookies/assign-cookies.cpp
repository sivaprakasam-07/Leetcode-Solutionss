// class Solution {
// public:
//     int findContentChildren(vector<int>& g, vector<int>& s) {
//         int count=0;
//         for(int i=0;i<g.size();i++){
//             for(int j=0;j<s.size();j++){
//                 if(s[j]>=g[i]){
//                     count++;
//                     break;
//                 }
//             }
//         }
//         return count;
//     }
// };

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int i = 0, j = 0, count = 0;

        while (i < g.size() && j < s.size()) {
            if (s[j] >= g[i]) {
                count++;
                i++;
                j++;
            } else {
                j++;
            }
        }
        return count;
    }
};
