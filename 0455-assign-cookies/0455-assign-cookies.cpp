class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n=s.size();
        int m=g.size();
        sort(g.begin(),g.end(),greater<int>());
        sort(s.begin(),s.end(),greater<int>());
        int i=0;
        int j=0;
        int cnt=0;
        while(i<m && j<n){
            if(g[i]>s[j]){
                i++;
            }else{
                cnt++;
                j++;
                i++;
            }
        }
        return cnt;
        
    }
};