class Solution {
public:
    void qs(vector<int>& arr, int low, int high) {
        if (low >= high) return;

        int pivot = arr[low];
        int lt = low, gt = high, i = low;

        while (i <= gt) {
            if (arr[i] < pivot) swap(arr[i++], arr[lt++]);
            else if (arr[i] > pivot) swap(arr[i], arr[gt--]);
            else i++;
        }

        qs(arr, low, lt - 1);
        qs(arr, gt + 1, high);
    }

    vector<int> sortArray(vector<int>& nums) {
        qs(nums, 0, nums.size() - 1);
        return nums;
    }
};