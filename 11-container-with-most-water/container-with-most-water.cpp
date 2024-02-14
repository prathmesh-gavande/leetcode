class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0;
        int area;
        int i=0;
        int j=height.size()-1;
        while(i<j){
            area=(min(height[i],height[j]))*(j-i);
            if(height[i]<height[j]){
                i++;
            }else{
                j--;
            }
            ans=max(ans,area);
        }
        return ans;
    }
};