class Solution:
    def trap(self, height: List[int]) -> int:
        self.count=0
        
        self.height=height
        self.max=height[0]
        n=0
        for i in range(1,len(self.height)):
            if self.height[i]>=self.max:
                self.max=self.height[i]
                n=i
        left=self.height[:n+1]
        right=self.height[n+1:]
        val=left[0]
        
        for t in range(1,len(left)):
            if left[t]>=val:
                val=left[t]
            else:
                self.count+=val-left[t]
        if len(right) > 0:
            num = right[-1]
            for k in range(len(right)-2, -1, -1):
                if right[k] >= num:
                    num = right[k]
                else:
                    self.count += num - right[k]
        return self.count

            


            


        