class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int>manjeet;
        int maxlenght = 0;
        //maximum lenght = 0 liye hai yaha 
        for(int i = 0, j = 0; j < s.size(); j++){ 
            //s.size() - ----- OPERATION USE 

            manjeet[s[j]]++;

            while(manjeet[s[j]] > 1) manjeet[s[i++]]--;

            maxlenght = max(maxlenght, j - i +1);
        }

        return maxlenght;

        
    }
};


//yaha hame without repeating characters ko print krwana hai Like Longest substring 🤷‍♂️🙋‍♂️🙋‍♂️🙋‍♂️
//  Ham Bihari hai Babu 
// To chliye dekhte hai 👍