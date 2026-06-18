class Solution {
public:
    bool isPalindrome(string s) {
        string palindrome = "";

        for(int i = 0; i < s.length(); i++){
            if((s[i] >= 'a' && s[i] <= 'z') ||
               (s[i] >= 'A' && s[i] <= 'Z') ||
               (s[i] >= '0' && s[i] <= '9')){
                
                palindrome += tolower(s[i]);
            }
        }

        int left = 0;
        int right = palindrome.length() - 1;

        while(left < right){
            if(palindrome[left] != palindrome[right]){
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};