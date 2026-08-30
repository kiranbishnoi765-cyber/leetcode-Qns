class Solution:
    def asteroidCollision(self, asteroids: List[int]) -> List[int]:
        s=[]
        
        self.l=asteroids
        if len(self.l)==0:
            return []
        s.append(self.l[0])
        for i in range(1,len(self.l)):
            if len(s)!=0:
                if self.l[i]<0 and s[-1]*self.l[i]<0:
                    if abs(self.l[i])!=abs(s[-1]):
                        if abs(s[-1])<abs(self.l[i]):
                            while  len(s)!=0 and s[-1]*self.l[i]<0 and abs(s[-1])<abs(self.l[i]) :

                                s.pop()
                            if len(s)==0:
                                s.append(self.l[i])
                            elif abs(s[-1])==abs(self.l[i]) and s[-1]*self.l[i]<0:
                                s.pop()
                            elif s[-1]*self.l[i]>0:
                                s.append(self.l[i])
                            

                            else:
                                pass
                        else:
                            pass

                        
                            
                    else:
                        s.pop()
                else:
                    s.append(self.l[i])
            elif i<len(self.l):
                s.append(self.l[i])
        return s


        
        
        