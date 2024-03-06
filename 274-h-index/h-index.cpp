class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        int length=0;
        for(int i=citations.size()-1;i>=0;i--){
             length++;
            if(citations[i]<length)
                return length-1;    }
        return length;
    }
};