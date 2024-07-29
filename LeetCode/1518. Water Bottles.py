class Solution(object):
    def numWaterBottles(self, numBottles, numExchange):
        """
        :type numBottles: int
        :type numExchange: int
        :rtype: int
        """
        c=numBottles
        while numBottles>=numExchange:
            div=numBottles//numExchange
            rem=numBottles%numExchange
            numBottles=div+rem
            c+=div

        return c
        
           
           