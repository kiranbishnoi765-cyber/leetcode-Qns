class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set <int> st;
        int max_count=1;
        int count=1;
        int n=nums.size();
        if(n==0){
            return 0;
        }
        for(int i =0;i<n;i++){
            st.insert(nums[i]);
        }
        for(auto it:st){
            if(st.find(it-1)==st.end()){
                int x=it;
                count=1;
            
            while(st.find(x+1)!=st.end()){
                x=x+1;
                count++;
                
            }
            max_count=max(max_count,count);
            }
        }
        return max_count;
        
        
    }
};