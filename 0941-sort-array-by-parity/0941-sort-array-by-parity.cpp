class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;
        while (low < high) {
            if (nums[low] % 2 != 0 && nums[high] % 2 == 0) {
                int temp = nums[high];
                nums[high] = nums[low];
                nums[low] = temp;
                low++;
                high--;
            } else {
                if (nums[low] % 2 == 0) {
                    low++;
                }
                if (nums[high] % 2 != 0) {
                    high--;
                }
            }
        }
        return nums;
    }
};
