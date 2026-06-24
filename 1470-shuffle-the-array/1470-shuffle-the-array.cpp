class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector <int> ans;
        vector<int> p(nums.begin(),nums.begin()+n);
        vector <int> j(nums.begin()+n,nums.end());
        for(int i=0;i<n;i++){
            ans.push_back(p[i]);
            ans.push_back(j[i]);
        }
        return ans;

        
       
        
    }
};