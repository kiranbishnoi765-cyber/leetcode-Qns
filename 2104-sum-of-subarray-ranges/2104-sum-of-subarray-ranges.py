class Solution:
    
       

    def subArrayRanges(self, nums: List[int]) -> int:
        i=0
        j=i+1

        count=0
        self.nums=nums
        n=len(self.nums)
        max_val=self.nums[i]
        min_val=self.nums[i]
        while i!=n-1:
            while j!=n:
                max_val=max(max_val,self.nums[j])
                min_val=min(min_val,self.nums[j])
                count+=max_val-min_val
                j+=1
            i=i+1
            j=i+1
            max_val=self.nums[i]
            min_val=self.nums[i]
        return count

            


        