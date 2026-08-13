class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        n=len(nums)
       
        if n==0:
            return [-1,-1]
            
        
        
        def findFirst(nums, target):
            low, high = 0, len(nums)-1
            ans = -1
            while low <= high:
                mid = (low+high)//2
                if nums[mid] == target:
                    ans = mid        
                    high = mid - 1   
                elif nums[mid] < target:
                    low = mid + 1
                else:
                    high = mid - 1
            return ans
        def find_end(nums, target):
            low, high = 0, len(nums)-1
            ans = -1
            while low <= high:
                mid = (low+high)//2
                if nums[mid] == target:
                    ans = mid        
                    low = mid + 1   
                elif nums[mid] < target:
                    low = mid + 1
                else:
                    high = mid - 1
            return ans
        a=findFirst(nums,target)
        b=find_end(nums,target)
        return [a,b]
        
                
        