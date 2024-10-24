class Solution(object):
    def isSubsequence(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        for x in s:
            temp = t.find(x)
            if temp == -1:
                return False
            else :
                t = t[temp+1:]
        return True