class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        if (n == 0) return -1;

        int lo = 0, hi = n - 1;
                while (lo < hi) {
                int mid = lo + (hi - lo) / 2;
                if (nums[mid] > nums[hi]) lo = mid + 1;
                else hi = mid;

            }
        int start = lo;
                lo = 0, hi = n - 1;
                while (lo <= hi) {
                int mid = lo + (hi - lo) / 2;
                int realMid = (mid + start) % n;
                if (nums[realMid] == target) return realMid;
                if (nums[realMid] < target) lo = mid + 1;
                else hi = mid - 1;

        }

        return -1;

    }
};