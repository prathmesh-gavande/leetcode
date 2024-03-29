class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int, int> mp;
        vector<int> res;
        int yo = grid.size() * grid.size();
        int ac_sum = (yo * (yo + 1)) / 2;
        int rep = 0;
        long long sum = 0;
        long long ans = 0;

        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[i].size(); ++j) {
                // Access the element at row i, column j
                int element = grid[i][j];
                mp[grid[i][j]]++;
            }
        }

        for (auto mapp : mp) {
            sum += mapp.first;
            if (mapp.second == 2) {
                ans = mapp.first;
                res.push_back(ans);
            }
        }
        res.push_back(ac_sum - sum);
        return res;
    }
};