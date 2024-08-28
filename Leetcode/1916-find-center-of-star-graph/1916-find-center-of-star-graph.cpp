class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        if (edges[0][0] == edges[1][0] || edges[0][0] == edges[1][1]) {
            return edges[0][0];
        } else {
            return edges[0][1];
        }
    }
};


// int findCenter(vector<vector<int>>& edges) {
//         map<int, int> count;
//         for(int i = 0; i < edges.size(); i++) {
//             for(int j = 0; j < edges[i].size(); j++) {
//                 count[edges[i][j]]++;
//             }
//         }
        
//         for (auto& it : count) {
//             if (it.second == edges.size()) {
//                 return it.first;
//             }
//         }
        
//         return -1;
//     }