class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        float curr = abs((float)(coordinates[0][0]-coordinates[coordinates.size()-1][0]) / (coordinates[0][1] - coordinates[coordinates.size()-1][1]));
        for(int i=1;i<coordinates.size();i++){
            float next = abs((float)(coordinates[i][0]-coordinates[i-1][0]) / (coordinates[i][1] - coordinates[i-1][1]));
            if(curr != next) return false;
        }
        return true;
    }
};