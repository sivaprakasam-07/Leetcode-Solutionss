class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
        int limit = n / 2;
        vector<int> taken;
        int count = 0;

        for (int i = 0; i < n; i++) {
            bool found = false;

            for (int j = 0; j < taken.size(); j++) {
                if (taken[j] == candyType[i]) {
                    found = true;
                    break;
                }
            }

            if (!found) {
                taken.push_back(candyType[i]);
                count++;
            }

            if (count == limit) {
                break;
            }
        }

        return count;
    }
};
