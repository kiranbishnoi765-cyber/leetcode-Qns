class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();//no of rows
        int m=matrix[0].size();// no oh columns
        int i=0;
        int j=n-1;
        int mid=(i+j)/2;
        int output=false;
       
    
        while(i<=j){
            if(target>matrix[mid][m-1]){
                i=mid+1;
                mid=(i+j)/2;
            }
            else if(target<matrix[mid][0]){
                j=mid-1;
                mid=(i+j)/2;

            }
            else{
                i=mid;
                break;
                
            }
        }if (i>=0 && i<n){
            for(int k=0;k<m;k++){
                if(target==matrix[i][k]){
                    output=true;
                }
            }
        }
       
        return output;
        
    }
};