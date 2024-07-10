class Solution {
public:
    string getPermutation(int n, int k) {
        
    string s = "", res = "";
    vector<int>factorial(n + 1, 1);
    int sum = 1;
    for(int i = 1; i <= n; i++){
    s.push_back(i + '0');
    sum *= i;
    factorial[i] = sum;

    }
    k--;
    for(int i = 1; i <= n; i++){
    int index = k / factorial[n - i];
    res.push_back(s[index]);
    s.erase(s.begin() + index);
    k %= factorial[n - i];
 }
 return res;
    }                                                                                                
};