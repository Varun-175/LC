class Solution:
    def reverseWords(self, s: str) -> str:
        lis = list(s.split())
        lis.reverse()
        s1 = " ".join(lis)
        return s1