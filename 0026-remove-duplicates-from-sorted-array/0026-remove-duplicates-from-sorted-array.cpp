class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=1;
        int k=1;
        while(j<n){
            if(nums[i]!=nums[j]){
                nums[k]=nums[j];
                i=j;
                j++;
                k++;
                continue;
            }else{
                j++;
            }
        }
        return k;
       
    }
};