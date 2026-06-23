class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n= nums.size();
        int freq=0;
        int val=0;
        for(int i=0;i<n;i++){
            if(freq==0){
                val=nums[i];
            }
            if(val==nums[i]){
                freq++;
            }else{
                freq--;
            }

        }
        return val;

        
    }
};