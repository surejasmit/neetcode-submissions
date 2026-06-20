class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int right = 0;
        int result = 0;
        map<char,int> mp;

        while(right < s.length()) {

            if(mp.find(s[right]) == mp.end()) {
                mp[s[right]] = right;
                result = max(result, right - left + 1);
                right++;
            }
            else {
                if(mp[s[right]] >= left && mp[s[right]] <= right) {
                    result = max(result, right - left);
                    left = mp[s[right]] + 1;
                }

                mp[s[right]] = right;
                result = max(result, right - left + 1);
                right++;
            }
        }

        return result;
    }
};