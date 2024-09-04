class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int startindex=0;
        int currentgas=0;
        int totalgas=0;
        for(int i=0;i<n;i++){
            int diff=gas[i]-cost[i];
            currentgas+=diff;
            totalgas+=diff;
            if(currentgas<0){
                currentgas=0;
                startindex=i+1;
            }
        }
        return totalgas>=0?startindex:-1;
    }
};