class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        
        for(int i=0;i<n;i++){
            for (int j=n-1;j>i+2;j--){
                
                if(i>0 && nums[i]==nums[i-1]) continue;
                if(j<n-1 && nums[j]==nums[j+1]) continue;
                long long sum = target - (long long)(nums[i]+nums[j]);

            
            int rl=i+1;
            int rr=j-1;
            while(rl<rr){
                if(sum==(long long)nums[rl]+nums[rr]){
                    ans.push_back({nums[i],nums[rl],nums[rr],nums[j]});
                    rr--;
                    rl++;
                    while(rl<rr && (long long)nums[rl]==nums[rl-1]){
                        rl++;
                    }
                    while(rl<rr &&(long long) nums[rr]==nums[rr+1]){
                        rr--;
                    }


                }else if(sum<(long long)nums[rl]+nums[rr]){
                    rr--;
                }else{
                    rl++;
                }
            }
           
        }
        }
        return ans;
        
    }
};