class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int target=0;
        vector<vector<int>> ans;
        vector<int> val;
        
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;

            } 
            int rem_sum=target-nums[i];
            int left=i+1;
            int right=n-1;
            
            while(left<right){
                if(rem_sum==nums[right]+nums[left]){
                    val= {nums[i],nums[left],nums[right]};
                    
                    ans.push_back(val);
                    left++;
                    right--;
                    
                    while( left<right && nums[left]==nums[left-1]){
                        left++;
                    }
                    while(left < right && nums[right]==nums[right+1]) right--;
                   
                    
                    
                }else if(rem_sum<nums[right]+nums[left]){
                    right--;
                }else{
                    left++;
                }

            }

           
            

            
            
        }
        return ans;
        
    }
};