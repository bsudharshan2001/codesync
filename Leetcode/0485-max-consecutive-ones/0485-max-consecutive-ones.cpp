class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0, maxCount=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
                if(count>maxCount)
                    maxCount=count;
            }
            else{
                if(count>maxCount){
                    maxCount=count;
                    count=0;
                }
                else count=0;
            }
        }
        return maxCount;
    }
};