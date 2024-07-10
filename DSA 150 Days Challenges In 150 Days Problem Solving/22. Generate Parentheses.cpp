class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        DFS(res, n, 0, 0, "");
        return res;
    }

    void DFS(vector<string>& res, int n, int k, int left, string path) {
       if (left > n) return;
        if (k == n) {
            if (left == 0) res.push_back(path);

            return;
        }
         DFS(res, n, k, left + 1, path + '(');
           if (left != 0) DFS(res, n, k + 1, left - 1, path + ')');
                    
         }
};
 