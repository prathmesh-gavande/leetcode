class Solution {
    public int maxProfit(int[] prices) {
        int b=prices[0],s=0,p=0;
        for(int i=0;i<prices.length;i++){
            if(prices[i]<b){
                b=prices[i];
            }
            if(p<prices[i]-b){
                p=prices[i]-b;
                s=i;
            }
        }
        if(p==0){
            return 0;
        }
        return s+1;
    }
}