class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int n = difficulty.size();
        int m = worker.size();
        
        vector<pair<int, int>> jobs;
        for (int i = 0; i < n; ++i) {
            jobs.push_back({difficulty[i], profit[i]});
        }
        sort(jobs.begin(), jobs.end());
        
        sort(worker.begin(), worker.end());

        int maxProfit = 0, sum = 0, j = 0;
        
        for (int i = 0; i < m; ++i) {
            while (j < n && worker[i] >= jobs[j].first) {
                maxProfit = max(maxProfit, jobs[j].second);
                ++j;
            }
            sum += maxProfit;
        }
        
        return sum;
    }
};


// class Solution {
// public:
//     int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
//         int maxProfit=0, sum=0,i=0,j=0;
//         while(i<worker.size()){
//             if(worker[j]>=difficulty[i] && maxProfit<profit[i]){
//                 maxProfit=profit[i];
//             }
//             i++;
//             if(i==worker.size()){
//                 j++;
//                 maxProfit+=sum;
//                 i=0;
//             }
//         }
//         return sum;
//     }
// };