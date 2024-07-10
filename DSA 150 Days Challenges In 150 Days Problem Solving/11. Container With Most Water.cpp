class Solution {
public:
    int maxArea(vector<int>& height) {
        int min_height = height[0];
        int max_height = height[height.size()-1];
        int min_idk = 0;
        int max_idk = height.size()-1;

        if(max_height < min_height){
            min_height = max_height;
            min_idk = max_idk;
            max_height = height[0];
            max_idk = 0;
        }

        int w = height.size() - 1;
        int max_area = min_height*w;

        while(w > 0){
            int idk = min_idk;
            while(height[idk] <= min_height){
                if(min_idk < max_idk)
                idk++;

                else
                    idk--;
                w--;
                if(w < 1)
                break;
            }

            if(height[idk] > max_height){
                min_height = max_height;
                min_idk = max_idk;
                max_idk = idk;
                max_height = height[idk];
            }
            else{
                min_idk = idk;
                min_height = height[idk];
            }
            max_area = max(max_area, w*min_height);
        }
        return max_area;
        
    }
};