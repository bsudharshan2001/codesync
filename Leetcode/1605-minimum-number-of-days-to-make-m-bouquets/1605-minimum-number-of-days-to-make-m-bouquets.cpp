class Solution {
public:
    bool canMakeBouquets(const vector<int>& bloomDay, int m, int k, int day) {
        int flowers = 0, bouquets = 0;
        for (int bloom : bloomDay) {
            if (bloom <= day) {
                flowers++;
                if (flowers == k) {
                    bouquets++;
                    flowers = 0;
                }
            } else {
                flowers = 0;
            }
            if (bouquets == m)
                return true;
        }
        return bouquets >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        if ((long long)m * k > bloomDay.size())
            return -1;

        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());

        while (low < high) {
            int mid = low + (high - low) / 2;
            if (canMakeBouquets(bloomDay, m, k, mid)) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }

    
};


// class Solution {
// public:
//     int minDays(vector<int>& bloomDay, int m, int k) {
//        if(m * k > bloomDay.size())
//             return -1;

//         set<int> s; 
//         s.insert(bloomDay.begin(), bloomDay.end()); 

//         int count = 0, bouquets = 0, min = -1;

//         for (auto it = s.begin(); it != s.end(); ++it) {
//             count = 0;
//             bouquets = 0;
//             for (int i = 0; i < bloomDay.size(); ++i) {
//                 if (bloomDay[i] <= *it) {
//                     count++;
//                     if (count == k) {
//                         bouquets++;
//                         count = 0;
//                     }
//                 } else {
//                     count = 0;
//                 }
//                 if (bouquets == m) {
//                     min = *it;
//                     break;
//                 }
//             }
//             if (bouquets == m) {
//                 break;
//             }
//         }

//         return min;
//     }
// };