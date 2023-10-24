class Solution {
public:
    int lengthOfLastWord(string s) {
        int st=s.length()-1;
        while(s[st]==' ')st--;
        int en=0;
        while(st>=0 && s[st]!=' ')
        {
            en++;
            st--;
        }
        return en;
    }
};