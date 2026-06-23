class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int left=0, max_count=0;
        int n=s.size();
        for(int i=0;i<n;i++){
   
            if(mp.find(s[i]) != mp.end() && mp[s[i]] >= left){
                left = mp[s[i]] + 1;
            }
            mp[s[i]] = i;  
            max_count = max(max_count, i-left+1);
        }
        return max_count;
        
    }
};
            
            
            
            

            
           

        
        
            
            
        