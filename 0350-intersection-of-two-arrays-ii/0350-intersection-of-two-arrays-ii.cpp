class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_map<int, int> n1, n2;

        for(int num : nums1) {
            n1[num]++;
        }

        for(int num : nums2) {
            n2[num]++;
        }

        for(auto it = n1.begin(); it != n1.end(); ++it) {
            if(n2.count(it->first)) {
                int min_count = min(it->second, n2[it->first]);
                for(int i = 0; i < min_count; ++i) {
                    res.push_back(it->first);
                }
            }
        }

        return res;
    }
};
