class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans = 0, prev = 0; 
        for (auto& row : bank) {
            int curr = count(row.begin(), row.end(), '1'); 
            if (curr) {
                ans += prev * curr; 
                prev = curr; 
            }
        }
        return ans; 
    }
};