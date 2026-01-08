class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned = "";

        for (int i = 0; i < s.length(); i++) {
            if (isalnum(s[i])) {
                cleaned += tolower(s[i]);
                }
        }

        int n = cleaned.length();
        for (int i = 0; i < n / 2; i++) {
            int j = n - 1 - i;
            if (cleaned[i] != cleaned[j]) {
                return false;
            }
        }

        return true;
    }
};