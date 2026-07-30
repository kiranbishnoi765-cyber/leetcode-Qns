class Solution:
    def myAtoi(self, s: str) -> int:
        
        val=0
        s=s.strip(" ")
        if len(s)==0:
            return 0
        if(s[0]=='-'):
            sign=-1
        else:
            sign=1
        
        start=1 if (s[0]=='-' or s[0]=='+') else 0
        i=start-1
        for i in range(start,len(s)):
            if not s[i].isdigit():
                
                break
            val=val*10+int(s[i])
        
        val=val*sign
              
        if val>(2**31)-1:
            val=(2**31)-1
        elif val<-2**31:
            val=-(2**31)
        return val