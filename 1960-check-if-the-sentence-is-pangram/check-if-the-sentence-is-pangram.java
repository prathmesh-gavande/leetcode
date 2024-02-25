public class Solution {
    public boolean checkIfPangram(String sentence) {
        int[] arr = new int[26];
        
        int count = 0;
        
        for(char ch : sentence.toCharArray()) {
            int index = ch - 'a';
            
            if(arr[index] == 0) {
                arr[index]++;
                count++;
            }
        }
        
        return count == 26;
    }
}