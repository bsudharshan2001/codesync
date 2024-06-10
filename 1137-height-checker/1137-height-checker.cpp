class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int expected[heights.size()];
        copy(heights.begin(),heights.end(),expected);

        for(int i=0;i<heights.size();i++){
            for(int j=0;j<heights.size();j++){
                if(heights[i]<heights[j]){
                    int temp=heights[i];
                    heights[i]=heights[j];
                    heights[j]=temp;
                }
            }
        }

        int count=0;
        for(int i=0;i<heights.size();i++){
            if(heights[i]!=expected[i])
                count++;
        }
        return count;
    }
};