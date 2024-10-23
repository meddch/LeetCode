class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        s = s.lower()
        for char in s:
            if not char.isalnum():
                s = s.replace(char,'').lower()
        return  s == s[::-1]