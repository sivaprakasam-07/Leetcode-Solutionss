class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        long long rev = 0;

        while (x > 0) {
            int digit = x % 10;
            rev = (rev * 10) + digit;
            x = x / 10;
        }

        return rev == temp;
    }
};