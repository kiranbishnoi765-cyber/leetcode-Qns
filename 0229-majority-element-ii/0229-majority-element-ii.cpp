class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1=0,cnt2=0,el1=0,el2=0;
        vector<int> ans;
        int n=nums.size();
        for(int x:nums){
            if (cnt1==0 && x!=el2){
                cnt1++,el1=x;
            }
            else if( cnt2==0 && x!=el1){
                cnt2++,el2=x;
            }
            else if(x==el1){
                cnt1++;
            }
            else if(x==el2){
                cnt2++;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
        int fq1=0,fq2=0;
        for(int x:nums){
            if(x==el1){
                fq1++;
                
            }else if(x==el2){
                fq2++;     
            }
        }
        if(fq1 > n/3) ans.push_back(el1);
        if(fq2 > n/3 && el2 != el1) ans.push_back(el2);
        return ans;
    }
};