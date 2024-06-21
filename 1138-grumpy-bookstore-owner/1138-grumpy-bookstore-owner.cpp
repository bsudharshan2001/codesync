class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int l=0,window=0,satisfied=0, max_window=0;
        for(int r=0;r<customers.size();r++){
            if(grumpy[r]==1){
                window+=customers[r];
            }
            else satisfied+=customers[r];

            if(r-l+1>minutes){
                if(grumpy[l])
                    window-=customers[l];
                l+=1;
            }
            max_window=max(window,max_window);

        }
        return satisfied+max_window;
    }
};


// class Solution {
// public:
//     int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
//         int n = customers.size();
        
//         int total_satisfied = 0;
//         for (int i = 0; i < n; ++i) {
//             if (grumpy[i] == 0) {
//                 total_satisfied += customers[i];
//             }
//         }

//         int max_additional_satisfied = 0;
//         for (int i = 0; i <= n - minutes; ++i) {
//             int additional_satisfied = 0;
//             for (int j = 0; j < minutes; ++j) {
//                 if (grumpy[i + j] == 1) {
//                     additional_satisfied += customers[i + j];
//                 }
//             }
//             max_additional_satisfied = max(max_additional_satisfied, additional_satisfied);
//         }

//         return total_satisfied + max_additional_satisfied;
//     }
// };

