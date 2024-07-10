class Solution {
public:
    int romanToInt(string s) {
       unordered_map<char,int> m{{'I',1}, {'X',10}, {'C',100}, {'M',1000}, {'V',5}, {'L',50}, {'D',500}};
        int sum = m[s.back()];
        for(int i = s.size() - 2; i >= 0; i--) 
        sum += m[s[i]] >= m[s[i + 1]] ? m[s[i]] : -m[s[i]];
         return sum;
    }
};