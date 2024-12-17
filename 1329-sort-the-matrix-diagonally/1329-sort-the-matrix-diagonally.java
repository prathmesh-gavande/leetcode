class Solution {
    public int[][] diagonalSort(int[][] mat) {
        int m = mat.length;
        int n = mat[0].length;
        
        HashMap<Integer, List<Integer>> mp = new HashMap<>();
        
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                mp.put(i - j, mp.getOrDefault(i - j, new ArrayList<>()));
                mp.get(i - j).add(mat[i][j]);
            }
        }
        for(List<Integer> diagonal : mp.values()) {
            Collections.sort(diagonal);
        }
        
        for(int i = m - 1; i >= 0; i--) {
            for(int j = n - 1; j >= 0; j--) {
                mat[i][j] = mp.get(i - j).remove(mp.get(i - j).size() - 1);
            }
        }
        
        return mat;
    }
}