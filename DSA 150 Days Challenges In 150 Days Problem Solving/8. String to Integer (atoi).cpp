class Solution {
    public:
        int myAtoi(string str) {
        int i = 0, sign = 1, result = 0;
        while (isspace(str[i])) i++;
         if (str[i] == '+' || str[i] == '-') sign = (str[i++] == '-') ? -1 : 1;
          while (isdigit(str[i])) {

            if (result > INT_MAX / 10 || (result == INT_MAX / 10 && str[i] - '0' > 7))
            return (sign == 1) ? INT_MAX : INT_MIN;

            result = result * 10 + (str[i++] - '0');
        }
        return result * sign;
    }
};

