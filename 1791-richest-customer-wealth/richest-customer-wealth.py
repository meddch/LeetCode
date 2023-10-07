class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        Max=0
        for i in accounts:
            Sum=0
            for k in i:
                Sum=Sum + k
            if Max < Sum:
                Max = Sum
        return Max