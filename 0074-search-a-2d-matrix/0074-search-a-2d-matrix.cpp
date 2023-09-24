class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size();
        int c=matrix[0].size();
        int n=(r*c);
        int s=0;
        int e=n-1;
        int mid=s+((e-s)/2);
        while(s<=e){
            int i=mid/c;
            int j=mid%c;
            int current=matrix[i][j];

            if (current==target){
                return true;
            }
            else if(target>current){
                s=mid+1;
            }else{
                e=mid-1;
            }
            mid=s+((e-s)/2);
        }
        return false;
    }
};