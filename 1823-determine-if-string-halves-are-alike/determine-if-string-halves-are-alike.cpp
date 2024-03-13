class Solution {
public:
    bool halvesAreAlike(string s) {
        int fulllen=s.length();
        int i=0;
        int j=fulllen-1;
        string vowels="aeiouAEIOU";
        
        unordered_set<char> st(begin(vowels), end(vowels));

        int countfirst=0;
        int countsecond=0;
        while(i<j){
            if(st.find(s[i]) != st.end()) countfirst++;
            
            if(st.find(s[j]) != st.end()) countsecond++;

            i++;
            j--;
        }
        if(countfirst==countsecond){
            return true;
        }
        return false;
    }
};