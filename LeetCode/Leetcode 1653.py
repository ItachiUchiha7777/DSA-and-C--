class Solution:
    def minimumDeletions(self, s: str) -> int:
        acr=0   #a_count_right
        for c in s:
            acr+=1 if c=="a" else 0
        bcl=0

        res=len(s)
        for i,c  in enumerate(s):
            if c=="a":
                acr-=1
            res=min(res,bcl+acr)

            if c=="b":
                bcl+=1
        return res