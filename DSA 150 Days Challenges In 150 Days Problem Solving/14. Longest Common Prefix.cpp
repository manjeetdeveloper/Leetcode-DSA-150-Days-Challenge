class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        sort(strs.begin(), strs.end());
        string a = strs[0], b = strs.back();
        int i = 0;
        while(i < min(a.size(), b.size()) && a[i] == b[i]) i++;
        return a.substr(0, i);
    }
};