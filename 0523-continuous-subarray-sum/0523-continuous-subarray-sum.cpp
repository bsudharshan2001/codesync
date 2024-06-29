class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> remainder = {{0, -1}};
        int total=0;

        for (size_t i = 0; i < nums.size(); ++i) {
        total+=nums[i];
        int r = total%k;

        if (remainder.find(r) == remainder.end()){
            remainder[r]=i;
        }
        else if(i-remainder[r]>1)
            return true;
        }
        
        return false;
    }
};