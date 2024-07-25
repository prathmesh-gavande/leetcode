class Solution {
    public String longestCommonPrefix(String[] strs) {
        StringBuilder ans= new StringBuilder();

        Arrays.sort(strs);
        String s1=strs[0];
        String s2=strs[(strs.length-1)];
        int i=0;
        while(i< s1.length() && i<s2.length()){
            if(s1.charAt(i)!=s2.charAt(i)){
                break;
            }else{
                ans.append(s1.charAt(i));
            }
            i++;
        }

        return ans.toString();
    }
}