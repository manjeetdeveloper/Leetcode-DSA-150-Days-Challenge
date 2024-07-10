class Solution {
public:
    void sortColors(vector<int>& nums) {

         vector<int>color(3);
        for(int i = 0; i < 3; i++)
        {
            if(i > 0) color[i] = color[i - 1];
            for(int j = color[i]; j < nums.size(); j++)
            while(color[i] <= j && nums[j] == i) swap(nums[j], nums[color[i]++]);

        }
        
    }
};