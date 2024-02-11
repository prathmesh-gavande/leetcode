class Solution {
public:
    //check for palindrome, return true if it.
    bool check(string &word)
    {
        int l = 0;
        int r = word.size()-1;

        while(l<r)
        {
            if(word[l] != word[r])
            {
                return false;
            }
            l++;
             r--;
        }
        return true;

    }
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++)
        {
            if(check(words[i]))
            return words[i];
        }

        return "";
        
    }
};