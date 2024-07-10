class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        for(auto x: nums) if(x) nums[j++] = x;
        while(j < nums.size()) nums[j++] = 0;
    }
};



// Without maintaining the relative order, min steps.


 // But this is not Correct SOlution 
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0, j = nums.size() - 1;
        while(i < j){
            while(i < j && nums[i] != 0) i++;
            while(i < j && nums[j] == 0) j--;
            swap(nums[i++], nums[j--]);
        }
    }
};