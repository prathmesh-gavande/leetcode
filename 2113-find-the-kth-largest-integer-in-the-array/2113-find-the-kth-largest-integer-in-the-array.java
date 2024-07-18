import java.math.BigInteger;
class Solution {
    public String kthLargestNumber(String[] nums, int k) {
        PriorityQueue<BigInteger> pq= new PriorityQueue<>(k);
        for(int i=0;i<k;i++){
             pq.add(new BigInteger(nums[i]));
        }
        for(int i=k;i<nums.length;i++){
            if(new BigInteger(nums[i]).compareTo(pq.peek()) > 0){
                pq.poll();
                pq.add(new BigInteger(nums[i]));
            }
        }
        return pq.peek().toString();
    }
}