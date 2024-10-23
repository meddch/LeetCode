class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        for char in string.punctuation:
            s = s.replace(char,'')
        s = s.replace(" ",'')
        s = s.lower()
        return  s == s[::-1]