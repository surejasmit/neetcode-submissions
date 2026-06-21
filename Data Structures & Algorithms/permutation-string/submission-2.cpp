class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        map<char,int>mp;

        for(int i =0 ;i<s1.length();i++){
            mp[s1[i]]++;
        }

        int left = 0;
        int right = 0;
        map<char,int>result;
        while(right < s2.length()){
        
            result[s2[right]]++;
            
            while(result[s2[right]] > mp[s2[right]]){
                result[s2[left]]--;
            
                if(result[s2[left]] == 0){
                    result.erase(s2[left]);
                }
                left++;
            }
            if(result==mp){
                return true;
            }

            right++;
        }
        return false;
    }
};
