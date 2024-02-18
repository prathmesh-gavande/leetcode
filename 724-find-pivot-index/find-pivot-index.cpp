class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalsum=0,sum=0,i;
        for(i=0;i<nums.size();i++){
            totalsum=totalsum+nums[i];
        }
        for(i=0;i<nums.size();i++){
            totalsum=totalsum-nums[i];
            if(totalsum==sum){
                return i;
            }
            sum=sum+nums[i];
        }
        return -1;
    }
};