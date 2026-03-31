class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mpp;
        for(auto str : strs)
        {
            string word = str;
            sort(str.begin(),str.end());
            mpp[str].push_back(word);
        }
        vector<vector<string>>res;
        for(auto ana : mpp)
        {
            res.push_back(ana.second);
        }
        return res;
    }
};
