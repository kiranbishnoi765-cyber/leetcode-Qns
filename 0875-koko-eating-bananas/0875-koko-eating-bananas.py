class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        def hour_needed(k):
            total=0
            for pile in piles:
                total+=(pile+k-1)//k
            return total
        def check(k):
            return hour_needed(k)<=h
        low,high=1,max(piles)
        ans=high
        while low<=high:
            mid=(low+high)//2
            if check(mid):
                ans=mid
                high=mid-1
            else:
                low=mid+1
        return ans
        