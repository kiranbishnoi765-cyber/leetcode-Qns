class Solution:
    def countGoodNumbers(self, n: int) -> int:
        MOD = 10**9 + 7
        k = n // 2      
        m = n - k       
        def pow(i:int,j:int,mod:int):
            ans=1
            while(j!=0):
                if(j%2==1):
                    ans=i*ans
                i=(i*i)%MOD
                j=j//2
            return ans%MOD
                

        return (pow(5, m, MOD) * pow(4, k, MOD)) % MOD

        