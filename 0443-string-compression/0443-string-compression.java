class Solution {
    public int compress(char[] chars) {
        int j = 0;
        int count = 1; 
        for (int i = 1; i < chars.length; i++) {
            if (chars[i] != chars[i - 1]) { 
                chars[j++] = chars[i - 1]; 
                if (count > 1) {
                    for (char c : Integer.toString(count).toCharArray()) {
                        chars[j++] = c; 
                    }
                }
                count = 1;
            } else {
                count++;
            }
        }
        chars[j++] = chars[chars.length - 1];
        if (count > 1) {
            for (char c : Integer.toString(count).toCharArray()) {
                chars[j++] = c;
            }
        }
        
        return j; 
    }
}
