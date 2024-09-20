class Solution {
    public int[] sortedSquares(int[] nums) {
        int[] ans=new int[nums.length];
        int i=0,k=nums.length-1,j=nums.length-1;
        while(i<=j){
          if(Math.abs(nums[i])>Math.abs(nums[j])){
            ans[k--]=nums[i]*nums[i];
            i++;
          }  
          else{
            ans[k--]=nums[j]*nums[j];
            j--;
          }
        }
        return ans;
    }
}