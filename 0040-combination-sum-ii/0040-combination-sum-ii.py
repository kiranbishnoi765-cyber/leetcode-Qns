class Solution:
    def combinationSum2(self, nums, target):
        nums.sort()
        ans = []
        val = []
        
        def solve(start, target):
            if target == 0:
                ans.append(val[:])
                return
            
            for i in range(start, len(nums)):
                if nums[i] > target:
                    break  
                
                if i > start and nums[i] == nums[i-1]:
                    continue  # duplicate skip 
                
                val.append(nums[i])
                solve(i + 1, target - nums[i])
                val.pop()
        
        solve(0, target)
        return ans


