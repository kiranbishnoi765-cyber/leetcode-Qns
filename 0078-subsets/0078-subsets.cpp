class Solution {
public:
    void sets(vector<int> &nums,int i,vector<int> & temp,vector<vector<int>> &val){
        if(i==nums.size()){
            val.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        sets(nums,i+1,temp,val);
        temp.pop_back();
        sets(nums,i+1,temp,val);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> val;
        vector<int> temp;
        
        sets(nums,0,temp,val);
        return val;
        
    }
};