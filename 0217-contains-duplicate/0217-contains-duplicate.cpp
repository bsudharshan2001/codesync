class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> count;
        for(int it:nums){
            count[it]++;
            if(count[it]>=2)
                return true;
        }
        return false;
        
    }
};