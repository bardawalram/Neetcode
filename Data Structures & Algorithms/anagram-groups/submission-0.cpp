class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>s;
        for(const auto& ch: strs){
            string nonsort=ch;
            sort(nonsort.begin(),nonsort.end());
            s[nonsort].push_back(ch);


        }
        
        vector<vector<string>> res;
        for(auto& pair:s){
            res.push_back(pair.second);
        }
        return res;
    }
};
