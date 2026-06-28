class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        int n = nums.size() - 1;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (nums[mid] == target)
                return mid;

            if (nums[mid] > nums[n]) { // part 1
                if (target < nums[mid] && target >= nums[0]) {
                    high = mid - 1;
                } else {
                    low = mid + 1;   // handles all remaining cases
                }
            }
            else { // part 2
                if (target > nums[mid] && target <= nums[n]) {
                    low = mid + 1;
                } else {
                    high = mid - 1;  // handles all remaining cases
                }
            }
        }
        return -1;
    }
};