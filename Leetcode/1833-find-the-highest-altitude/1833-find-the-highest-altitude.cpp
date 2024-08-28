class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int high = 0, alt = 0;
        for (int i = 0; i < gain.size(); i++) {
            alt += gain[i];
            if (alt > high)
                high = alt;
        }
        return high;
    }
};