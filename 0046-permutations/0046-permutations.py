class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        ans = []
        def getperms(nums: list[int], val: int, ans: list[list[int]]):
            if val == len(nums):
                ans.append(nums[:])  
                return
            for i in range(val, len(nums)):
                nums[val], nums[i] = nums[i], nums[val]
                getperms(nums, val+1, ans)
                nums[val], nums[i] = nums[i], nums[val]

        getperms(nums, 0, ans)
        return ans
    
    