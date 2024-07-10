class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());a
        int i = 1;
        for(int x: nums) if(x == i) i++;
        return i;
    }
};