class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        //if array has less than 3 elemts, no duplicates can the condition 
        if(nums.size() < 3) return nums.size();

        //Initzation two pointers i is the slow- runnner , j is the fast runner 
        int i = 2, j = 2;
        // Here array starting from the third element
        while(j < nums.size()) 
        {

            // current element is greatere thamn the ele two postion before it 

            if (nums[j] > nums[i - 2])
            {
                
                nums[i] = nums[j];

                i++;

            }
            
            j++;

        }

        return i;
    }
};