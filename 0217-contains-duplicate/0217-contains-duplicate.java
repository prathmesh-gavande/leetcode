class Solution {
    public boolean containsDuplicate(int[] nums) {
        int i=0,j=1;
        for(j=1;j<nums.length;j++){
            if(nums[i]==nums[j]){
                i++;
            }
            if(i!=0){
                return true;
            }
        }
        return false;
    }
}