class Solution {
public:
    void swap(vector<int>& arr, int i, int j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    void moveZeroes(vector<int>& nums) {
        int zero=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                swap(nums, zero, i);
                zero++;
            }
        } 
    }
};