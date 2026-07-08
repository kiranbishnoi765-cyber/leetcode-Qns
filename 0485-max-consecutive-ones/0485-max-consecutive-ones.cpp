class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int max_num;
        if(n==0){
            return 0;
        }
        if(n==1 && nums[0]==1){
            return 1;
        }
        if(nums[0]==1){
             max_num=1;
        }else{
            max_num=0;
        }
        int curr=1;
        
        for(int i=1;i<n;i++){
            if(nums[i]==1){
                if( nums[i]==nums[i-1]){
                curr++;
            }else{
                curr=1;
            }
            max_num=max(max_num,curr);

            }
            
        }
        return max_num;
        
    }
};