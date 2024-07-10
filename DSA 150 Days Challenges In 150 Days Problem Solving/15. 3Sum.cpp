class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(begin(nums), end(nums));
        vector<vector<int>> res;
        for (int i = 0, n = size(nums); i < n - 2; ++i) {
            if (!i || nums[i] != nums[i - 1]) {
            for (int l = i + 1, r = n - 1; l < r;) {

                int sum = nums[i] + nums[l] + nums[r];
                if (sum < 0) while (l < r && nums[l] == nums[++l]);
                else if (sum > 0) while (l < r && nums[r] == nums[--r]);
                else res.push_back({nums[i], nums[l++], nums[r--]});
            }
        }

    }
    return res;

    }  

};