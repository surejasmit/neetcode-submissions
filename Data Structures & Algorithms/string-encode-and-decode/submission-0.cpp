class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string;

        for(string s : strs){
            encoded_string += to_string(s.size()) + "#" + s;
        }
        return encoded_string;
    }

    vector<string> decode(string s) {
        
      int i = 0;
      vector<string>temp;

        while(i < s.length()){
            int j = i;

            while(s[j] != '#'){
                j++;
            }
            int num = stoi(s.substr(i,j-i));
            i = j + 1;
            j += num;

            temp.push_back(s.substr(i,num));
            i += num;
        }
        return temp;
    }
};
