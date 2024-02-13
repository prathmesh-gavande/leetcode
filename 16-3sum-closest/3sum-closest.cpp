class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int ans;
        int dist=INT_MAX;
        for(int i=0;i<nums.size()-2;i++){
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                if(nums[i]+nums[j]+nums[k] >target){
                    if(dist>abs((nums[i]+nums[j]+nums[k])-target)){
                        dist=abs((nums[i]+nums[j]+nums[k])-target);
                        ans=nums[i]+nums[j]+nums[k];
                    }
                    k--;
                }else{
                    if(dist>abs((nums[i]+nums[j]+nums[k])-target)){
                        dist=abs((nums[i]+nums[j]+nums[k])-target);
                        ans=nums[i]+nums[j]+nums[k];
                    }
                    j++;
                }
            }
        }
        return ans;
    }
};