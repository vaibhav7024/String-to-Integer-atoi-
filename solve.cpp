class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        while(isspace(s[i])) i++;

        int sign=1;
        if(s[i]=='-'){
            sign=-1;
            i++;
        }else if(s[i]=='+'){
            sign=1;
            i++;
        }
        int num=0;
        while(isdigit(s[i])){
           int digit = s[i] - '0';

        // Check for overflow before multiplying
        if (num > INT_MAX / 10 || (num == INT_MAX / 10 && digit > INT_MAX % 10)) {
            return sign == 1 ? INT_MAX : INT_MIN;
        }
        num=num*10+digit;
            i++;
        }

        num*=sign;
        return num;
    }
};
