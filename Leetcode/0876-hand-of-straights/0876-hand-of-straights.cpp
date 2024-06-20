class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int len=hand.size();
        map<int, int> hmap;
        if(len%groupSize!=0)
            return false;
        for(auto &it: hand)
            hmap[it]++;
        
        while(hmap.size()!=0){
            int iter=hmap.begin()->first;
            for(int i=0;i<groupSize;i++){
                if(hmap[iter+i]==0)
                    return false;
                else if(--hmap[iter+i]<1)
                    hmap.erase(iter+i);
            }
        }    
        return true;
    }
};