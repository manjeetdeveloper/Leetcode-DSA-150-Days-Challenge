class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        unordered_map<char, char> closing = {{')', '('}, {']', '['}, {'}', '{'}};

        for (char c : s) {
            if (closing.count(c)) {
                if (stk.empty() || stk.top() != closing[c])
                    return false;
                    stk.pop();

                } 
                    
                else {

                       stk.push(c);

                    }
            }

            return stk.empty();
        
        
    }
};