class Solution {
    public int diagonalSum(int[][] mat) {
        int m=mat.length;
        int n=mat[0].length;
        int sum=0;
        int j=n-1;
        for (int i=0;i<m;i++){
            sum+=mat[i][i];
            if(i!=j){
               sum+=mat[i][j]; 
            }
            j--;
        }
        return sum;
    }
}