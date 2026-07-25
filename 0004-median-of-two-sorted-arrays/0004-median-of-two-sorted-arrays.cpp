class Solution {
public:
    int partition(vector<int> &nums,int low,int high){
        int i=low;
        int j=high;
        int pivot=nums[low];
        while(i<j){
            while(nums[i]<=pivot && i<=high-1){
                i++;
            }
            while(nums[j]>pivot && j>=low+1){
                j--;
            }
            if(i<j){
                swap(nums[i],nums[j]);
            }
        }
        swap(nums[low],nums[j]);
        return j;
    }
    void qs(vector<int>& nums,int low,int high){
        if(low<high){
            int PIdx=partition(nums,low,high);
            qs(nums,low,PIdx-1);
            qs(nums,PIdx+1,high);
        }
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        qs(nums1,0,nums1.size()-1);
        int n=nums1.size();
        if(n%2!=0){
            double median=nums1[n/2];
            return median;
        }else{
            double median=(nums1[n/2]+nums1[n/2-1])/2.0;
            return median;

        }
        
        
    }
};