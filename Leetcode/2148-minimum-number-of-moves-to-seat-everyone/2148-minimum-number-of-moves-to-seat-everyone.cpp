class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int change=0,i=0;
        while(i<seats.size()){
            int diff=seats[i]-students[i];
            if(diff==0)
                i++;
            else {
                change+=abs(diff);
                i++;
            }
        }
        return change;
    }
};