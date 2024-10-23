class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        for char in s:
            if not char.isalnum():
                s = s.replace(char,'')
        s = s.lower()
        return  s == s[::-1]