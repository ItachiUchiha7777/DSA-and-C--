class Solution:
    def kthDistinct(self, arr: List[str], k: int) -> str:
        occ = {}
        for i in arr:
            if i in occ:
                occ[i] += 1
            else:
                occ[i] = 1
     
        distinct_strings = [string for string in arr if occ[string] == 1]
        
        # Return the k-th distinct string if it exists
        if k <= len(distinct_strings):
            return distinct_strings[k-1]
        else:
            return ""