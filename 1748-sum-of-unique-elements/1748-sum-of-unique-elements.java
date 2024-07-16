class Solution {
    public int sumOfUnique(int[] nums) {
        HashMap<Integer,Integer> map=new HashMap<>();
        int sum=0;
        for(int num:nums){
            map.put(num,map.getOrDefault(num,0)+1);
        }
        for(Map.Entry<Integer,Integer> mp : map.entrySet()){
            if(mp.getValue()==1){
                sum+=mp.getKey();
            }
        }
        return sum;
    }
}