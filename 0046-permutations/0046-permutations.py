class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        ans = []
        used = [False] * len(nums)
        
        def backtrack(val):
            if len(val) == len(nums):
                ans.append(val[:])      
                return
            
            for i in range(len(nums)):
                if used[i]:
                    continue        
                
                used[i] =True      
                val.append(nums[i])
                
                backtrack(val)      
                
                val.pop()           
                used[i] =False   
        
        backtrack([])
        return ans