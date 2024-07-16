class Solution {
    public int maxOperations(int[] nums, int k) {

//using hashmap
        HashMap<Integer,Integer> map=new HashMap<>();
        int count=0;
        for (int num : nums) {
            int c = k - num;
            if (map.containsKey(c)) {
                count++;
                if(map.get(c)==1){
                    map.remove(c);
                }
                else{
                map.put(c, map.get(c) - 1);
                }
            } else {
                map.put(num, map.getOrDefault(num, 0) + 1);
            }
        }


//Two pointer approach
        // int count=0;
        // Arrays.sort(nums);
        // int i=0,j=nums.length-1;
        // while(i<j){
        //     if(nums[i]+nums[j]<k){
        //         i++;
        //     }else if(nums[i]+nums[j]>k){
        //         j--;
        //     }else{
        //         count++;
        //         i++;
        //         j--;
        //     }
        // }
        return count;
    }
}