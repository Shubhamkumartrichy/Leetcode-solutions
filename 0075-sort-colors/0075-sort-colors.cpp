class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;        // Pointer for 0
        int high = nums.size() - 1; // Pointer for 2
        int current = 0;    // Pointer for iterating through the array

        while (current <= high) {
            if (nums[current] == 0) {
                swap(nums[current], nums[low]);
                low++;
                current++;
            } else if (nums[current] == 2) {
                swap(nums[current], nums[high]);
                high--;
            } else {
                current++;
            }
        }
    }
};
