class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> k;
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            if(k.find(target-nums[i]) != k.end()){
                res.push_back((k.find(target-nums[i]))->second);
                res.push_back(i);
                return res;
            }
            k.insert({nums[i],i});
        }
        return res;
    }
};