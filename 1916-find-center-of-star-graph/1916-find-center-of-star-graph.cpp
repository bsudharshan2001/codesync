class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int, int> count;
        for(int i = 0; i < edges.size(); i++) {
            for(int j = 0; j < edges[i].size(); j++) {
                count[edges[i][j]]++;
            }
        }
        
        for (auto& it : count) {
            if (it.second == edges.size()) {
                return it.first;
            }
        }
        
        return -1;
    }
};