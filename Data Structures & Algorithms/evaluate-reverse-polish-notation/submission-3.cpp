class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> temp;

        for(int i = 0; i < tokens.size(); i++) {

            if(tokens[i] != "+" && tokens[i] != "-" &&
               tokens[i] != "/" && tokens[i] != "*") {

                temp.push_back(stoi(tokens[i]));

            }
            else {
                if(temp.size() >= 2) {

                    if(tokens[i] == "+") {
                        int ele1 = temp.back();
                        temp.pop_back();
                        int ele2 = temp.back();
                        temp.pop_back();

                        int op = ele2 + ele1;
                        temp.push_back(op);
                    }
                    else if(tokens[i] == "-") {
                        int ele1 = temp.back();
                        temp.pop_back();
                        int ele2 = temp.back();
                        temp.pop_back();

                        int op = ele2 - ele1;  
                        temp.push_back(op);
                    }
                    else if(tokens[i] == "*") {
                        int ele1 = temp.back();
                        temp.pop_back();
                        int ele2 = temp.back();
                        temp.pop_back();

                        int op = ele2 * ele1;
                        temp.push_back(op);
                    }
                    else {
                        int ele1 = temp.back();
                        temp.pop_back();
                        int ele2 = temp.back();
                        temp.pop_back();

                        int op = ele2 / ele1; 
                        temp.push_back(op);
                    }
                }
            }
        }
        return temp[0];
    }
};