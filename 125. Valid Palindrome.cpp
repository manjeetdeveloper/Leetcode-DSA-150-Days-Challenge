class Solution {
public:
    bool isPalindrome(string s) {

    int i = 0, j = s.size() - 1;    //yaha  pe ham two pointers ko initiliz kiye ur " i " ko frist me and " j " ko end string bnye hai
    while(i < j){
    while(i < j && !isalnum(s[i])) i++;   // yaha pe move kiye hai left pointer " i " ko Right me  like Non-AlphaNumerical Ko chhorte hue
    while(i < j && !isalnum(s[j])) j--;    // same 
    if(tolower(s[i++]) != tolower(s[j--])) return false;  // aksharon kee tulana karen, donon ko loar kes mein badalen. yadi ve samaan nahin hain, to galat lautaen.

    }
        return true;  // yadi sabhee akshar mel khaate hain, to saty lautaen.
        
    }
};