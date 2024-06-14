class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int moves=0, step=0;
        for(int num:nums){
            step+=max(moves-num,0);
            moves=max(num,moves)+1;
        }
        return step;
        
    }
};


// class Solution {
// public:
//     int minIncrementForUnique(vector<int>& nums) {
//         unordered_map<int, int> count;
//         int moves=0;
//         for (int num : nums) {
//             count[num]++;
//         }

//         for (int num : nums) {
//             int step=1;
//             while (count[num] > 1) {
//                 if(count[num+step]==0){
//                     moves+=step;
//                     count[num]--;
//                     count[num+step]++;
//                     }
//                 step++;
//             }
//         }
//         return moves;
        
//     }
// };