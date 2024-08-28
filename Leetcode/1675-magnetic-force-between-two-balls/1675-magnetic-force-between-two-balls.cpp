class Solution {
public:
    bool isPossible(vector<int>& position, int mid, int m){
        int init=1;
        int prev=position[0];
        for(int i=1;i<position.size();i++){
            if(position[i]-prev>=mid){
                prev=position[i];
                init+=1;
                if(init==m)
                    return true;
            }
        }
        if(init<m)
            return false;
        return true;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int low=0, n=position.size(), high=position[n-1], out;
        while(low<=high){
            int mid=low+(high-low)/2;

            if(isPossible(position,mid,m)){
                out=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return out;
    }
};