class Solution:
    def largestOddNumber(self, num: str) -> str:
        lis = list(num.split())
        n = len(lis)
        count = 0
        lis1= []
        if (int(lis[n-1])%2 != 0):
            return num
        for ch in lis[n-2]:
            if int(ch)%2 != 0:
                count += 1
                lis1.append(int(ch))
        
        if count != 0:
            return str(max(lis1))
        else:
            return ""