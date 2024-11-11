class Solution {
    public String truncateSentence(String s, int k) {
        String arr[] = s.split(" ");
        StringBuffer sb = new StringBuffer();
        for(int i=0;i<k;++i){
            sb.append(arr[i]+" ");
        }
        
        return sb.toString().trim();
    }
}