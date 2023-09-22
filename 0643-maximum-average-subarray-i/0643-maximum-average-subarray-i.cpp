class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0,j=k-1;
        int sum=0;
        for (int y=0;y<=j;y++){
            sum=sum+nums[y];
        }
        int maxsum=sum;
        j++;
        while(j<nums.size()){
            sum-=nums[i++];
            sum+=nums[j++];
            maxsum=max(sum,maxsum);
        }
        double ans=maxsum/double(k);
        return ans;
    }
};