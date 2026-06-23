class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<pair<int,int>> m;
        for (int i=0;i<n;i++){
            m.push_back({nums[i],i});
        }
        sort(m.begin(),m.end());
        int left=0;
        int right=n-1;
        while(left<right){
            int sum=m[left].first+m[right].first;
            if(sum==target){
                return {m[left].second,m[right].second};

            }else if(sum<target){
                left++;

            }else{
                right--;
            }
        }
        return {-1,1};
    }
};