class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int val=0;
        for(auto it:nums){
            val=val^it;
        }
        return val;
        
    }
};