class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string, vector<string>> anamap;
        for (string s : strs) {
            string t = s;
            sort(t.begin(), t.end());
            anamap[t].push_back(s);
        }
        vector<vector<string>> ans;
        for (auto const& [key, val] : anamap) {
            ans.push_back(val);
        }
        return ans;
    }
};