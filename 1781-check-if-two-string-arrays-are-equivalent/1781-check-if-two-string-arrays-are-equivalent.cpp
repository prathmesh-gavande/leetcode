#include<bits/stdc++.h>

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        bool flag = true;
        string str1 = " ";
        string str2 = " ";
        for(int i=0; i < word1.size(); i++){
            str1 = str1 + word1[i];
        }
        for(int i=0; i < word2.size(); i++){
            str2 = str2 + word2[i];
        }

        if(str1 == str2){
            flag = true;
        }
        else{
            flag = false;
        }
        return flag;
    }
};