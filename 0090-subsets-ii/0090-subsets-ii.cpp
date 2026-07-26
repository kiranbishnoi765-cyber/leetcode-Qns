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
        
        
        int next = i;
        while(next < nums.size() && nums[next] == nums[i]) next++;
        sets(nums,next,temp,val);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> val;
        vector<int> temp;
        
        sets(nums,0,temp,val);
        return val;
        
    }
};