class Solution {
public:
    int minOperations(vector<string>& logs) {
        int res=0;
        regex pattern(R"((\w*\d+/)|(\d+/))");
        for(string &log:logs){
            if(log=="../" && res>0)
                res--;
            else if(log=="./")
                continue;
            else if(regex_search(log, pattern))
                res++;
        }
        return res;
        
    }
};