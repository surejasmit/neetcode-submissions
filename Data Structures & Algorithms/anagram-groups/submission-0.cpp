class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        map<string,vector<string>>mp;

        for(int i = 0;i<strs.size();i++){
            string original = strs[i];
            sort(strs[i].begin(),strs[i].end());

            
                mp[strs[i]].push_back(original);
        
        }
        vector<vector<string>>result;
        for(auto &index : mp){
            result.push_back(index.second);
        }

        return result;
    }
};
