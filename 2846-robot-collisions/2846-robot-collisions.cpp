class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        int n = positions.size();
        vector<int> indices(n);
        for (int i = 0; i < n; ++i) {
            indices[i] = i;
        }
        
        sort(indices.begin(), indices.end(), [&positions](int i, int j) {
            return positions[i] < positions[j];
        });

        stack<int> st;
        vector<bool> alive(n, true);
        
        for (int idx : indices) {
            if (directions[idx] == 'R') {
                st.push(idx);
            } else {
                while (!st.empty() && healths[idx] > 0) {
                    int right_idx = st.top();
                    if (healths[right_idx] > healths[idx]) {
                        healths[right_idx]--;
                        alive[idx] = false;
                        break;
                    } else if (healths[right_idx] < healths[idx]) {
                        healths[idx]--;
                        alive[right_idx] = false;
                        st.pop();
                    } else {
                        alive[right_idx] = false;
                        alive[idx] = false;
                        st.pop();
                        break;
                    }
                }
            }
        }

        vector<int> result;
        for (int i = 0; i < n; ++i) {
            if (alive[i]) {
                result.push_back(healths[i]);
            }
        }

        return result;
    }
};
