class Solution:
    def isValid(self, s: str) -> bool:
        stack=[]
        pairs = {')': '(', ']': '[', '}': '{'}
        for ch in s:#"()[]{}"
            if ch in ")}]":
                if(len(stack)==0):
                    return False
                if pairs[ch]==stack[-1]:
                    stack.pop()
                else:
                    return False
            else:
                stack.append(ch)
                
                
            
        if len(stack)==0:
            return True
        return False

        