class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
    size_t i = 0;
    int start=0,finish, wait;
    double out=0.0;

    while (i < customers.size()) {
        if(start<customers[i][0])
            start=customers[i][0];
        finish=start + customers[i][1];
        wait=finish-customers[i][0];
        out+=wait;
        start=finish;
        ++i;
    }

    return out/customers.size();
    }
};

