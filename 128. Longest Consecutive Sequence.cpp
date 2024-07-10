class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        int maxlen = 0;  // pae gae lagaataar anukramon kee adhikatam lambaee ko sangraheet karane ke lie char.
        unordered_map<int, int>m;  // pratyek sankhya par samaapt hone vaale lagaataar anukramon kee lambaee ko sangraheet karane ke lie haish maip.
        for(auto x: nums)
        {
            // yadi vartamaan nambar pahale se sansaadhit hai, to use chhod den.

            if(m[x]) continue;  
            int left = m[x - 1];  // x-1 par samaapt hone vaale lagaataar anukram kee lambae
            int right = m[x + 1];

            // lagaataar anukram kee lambaee jisamen x shaamil hai.
            m[x + right] = m[x - left] = m[x] = left + right + 1;

            // pae gae lagaataar anukramon kee adhikatam lambaee ko apadet karen.
             maxlen = max(maxlen, m[x]);


        }

        return maxlen;
        
    }
};