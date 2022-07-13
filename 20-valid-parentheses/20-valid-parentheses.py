class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        stack = []
        L = ["(", "[", "{"]
        R = [")", "]", "}"]
        
        for i in range(len(s)):
            if(s[i] in L):
                stack.append(s[i])
            else:
                if not stack :
                    return False
                temp = stack.pop()
                if R[L.index(temp)] == s[i]:
                    continue
                else:
                    return False
        if not stack:
            return True
        else:
            return False
                
                
        