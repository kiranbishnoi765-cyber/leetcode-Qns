class Solution:
    def combinationSum(self, nums: List[int], target: int) -> List[List[int]]:
        nums.sort()
        val=[]
        ans=[]
        def backtrack(idx,remaining):
            if remaining==0:
                ans.append(val[:])
                return
            if idx==len(nums) or nums[idx]>remaining:
                return
            val.append(nums[idx])
            backtrack(idx,remaining-nums[idx])
            val.pop()
            backtrack(idx+1,remaining)
        backtrack(0,target)
        return ans


        
        