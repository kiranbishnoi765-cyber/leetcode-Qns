class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n= nums.size();
        unordered_map<int,int> mp;
        vector<int> ans;
       
        for(int i=0;i<n;i++){
            if(mp.find(nums[i])!=mp.end()){
                mp[nums[i]]++;
            }else{
                mp[nums[i]]=1;
            }
            if(mp[nums[i]]>n/3 && find(ans.begin(),ans.end(),nums[i])==ans.end()){
                
                ans.push_back(nums[i]);

            }
        }
        

        

        return ans;
        
    }
};