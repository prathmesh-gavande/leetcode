class Solution {
public:
    string reorganizeString(string s) {
        if(s.size()==1) return s;

        vector<int>arr(26,0);

        for(auto it:s) arr[it-'a']++;
        int maxi = *max_element(arr.begin(),arr.end());
        int index = max_element(arr.begin(),arr.end()) - arr.begin();
        //int gap = 0;
        int n = s.size();
        int i = 0;

        while(maxi>0 && i<s.size()){
            s[i] = index + 'a';
            i+=2;
            maxi--;
        }
        
        //If we can't place the maximum in one go then dup will exist
        if(maxi!=0) return "";

        arr[index] = -1; // erase it's count

        //Now just place the remaining char 
        for(int j = 0; j<26; j++){ 
            while(arr[j]>0){ //As per their count
                i = (i>=n)? 1 : i; 
                s[i] = j+'a';
                arr[j]--;
                i+=2;
            }
        }
        return s;
    }
};