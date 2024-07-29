class Solution {
    public int strStr(String haystack, String needle) {
        int i,j=0;
        if(haystack.length()< needle.length()){
            return -1;
        }
        else{
            for(i=0;i<haystack.length();i++){
                if(haystack.charAt(i)==needle.charAt(j)){
                    j++;
                }
                else{
                    i=i-j;
                    j=0;
                }

                if(j==needle.length()){
                    return i-needle.length()+1;
                }
            }
        }
        return -1;
    }
}