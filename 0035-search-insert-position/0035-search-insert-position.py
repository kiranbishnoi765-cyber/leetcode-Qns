class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        n=len(nums)
        low=0
        high=n-1
        while(low<=high):
            mid=(low+high)//2
            if target==nums[mid]:
                return mid
            elif target<nums[mid]:
                high=mid-1
            else:
                low=mid+1
        low=0
        high=n-1
        while(low<high):
            mid=(high+low)//2
            if target>nums[mid]:
                if target<nums[mid+1]:
                    return mid+1
                low=mid+1
            elif target<nums[mid]:
                if target>nums[mid-1]:
                    return mid
                high=mid-1
        if(target>nums[-1]):
            return n
        elif target<nums[0]:
            return 0

        