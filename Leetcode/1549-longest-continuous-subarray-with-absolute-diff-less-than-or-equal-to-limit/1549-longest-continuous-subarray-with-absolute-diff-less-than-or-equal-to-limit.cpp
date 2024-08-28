class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        multiset<int> subarrays;
        int out=0,j=0;
        for(int i=0;i<nums.size();i++){
            subarrays.insert(nums[i]);
            while(*subarrays.rbegin() - *subarrays.begin()>limit){
                subarrays.erase(subarrays.find(nums[j++]));
            }
            out=max(out,i-j+1);
        }
        return out;
    }
};