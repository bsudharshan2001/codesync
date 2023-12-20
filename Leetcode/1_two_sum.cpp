#include<bits/stdc++.h>
using namespace std;

#define ll long long

//Sorted approach
// int main() {
//     vector<int> nums = {2, 7, 11, 15};
//     vector<int> indexes;
//     int target = 9;
//     auto f = nums.begin(), b = nums.end() - 1;
//     while (f < b) {
//         int sum = *f + *b;
//         if (sum == target) {
//             indexes.push_back(f - nums.begin());
//             indexes.push_back(b - nums.begin());
//             break;
//         } else if (sum > target) {
//             b--;
//         } else {
//             f++;
//         }
//     }
//     for (auto it : indexes)
//         cout << it << " ";
//     return 0;
// }

//Brute Force python approach
// def twoSum(self, nums: List[int], target: int) -> List[int]:
//         for i in range(len(nums)):
//             for j in range(len(nums)):
//                 if(i!=j and nums[i]+nums[j]==target):
//                     retList=[]
//                     retList.extend([i,j])
//                     return retList

//If array unsorted?
//Use hash map - Solve it using a unordered map -> which maps unique keys to values
// After mapping take the find the remaining using the compliment and search in the map

int main(){
    vector<int> nums= {3,2,4};
    vector<int> indexes;
    int target = 6;
    
    unordered_map<int,int> numMap;
    for(int i=0;i<nums.size();i++){
        int complement= target - nums[i];
        if(numMap.find(complement)!=numMap.end()){
            indexes.push_back(numMap[complement]);
            indexes.push_back(i);
            break;
    }
    numMap[nums[i]]=i;
}
for (auto it:indexes)
    cout<< it<< " ";
return 0;
}

