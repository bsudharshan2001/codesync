class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> count;
        vector<int> result;
        vector<int> remaining;


        for (int num : arr1) {
            count[num]++;
        }
        for (int num : arr2) {
            while (count[num] > 0) {
                result.push_back(num);
                count[num]--;
            }
        }
        for (auto& pair : count) {
            while (pair.second > 0) {
                remaining.push_back(pair.first);
                pair.second--;
            }
        }
        sort(remaining.begin(), remaining.end());
        result.insert(result.end(), remaining.begin(), remaining.end());

        return result;
    }
};