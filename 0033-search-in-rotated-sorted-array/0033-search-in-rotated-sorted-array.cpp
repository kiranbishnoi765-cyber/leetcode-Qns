class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int i = 0, j = n - 1;

        while (i <= j) {
            int mid = i + (j - i) / 2;

            if (nums[mid] == target) return mid;

            // left half sorted hai?
            if (nums[i] <= nums[mid]) {
                if (nums[i] <= target && target < nums[mid]) {
                    j = mid - 1;   // target left sorted half ke range mein hai
                } else {
                    i = mid + 1;   // nahi hai, right mein jao
                }
            }
            // warna right half sorted hai
            else {
                if (nums[mid] < target && target <= nums[j]) {
                    i = mid + 1;   // target right sorted half ke range mein hai
                } else {
                    j = mid - 1;   // nahi hai, left mein jao
                }
            }
        }
        return -1;
    }
};