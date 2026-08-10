class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0) return "0";

        bool neg = num < 0;
        long long n = abs((long long)num);
        string s;

        while (n) {
            s += char('0' + n % 7);
            n /= 7;
        }
        if (neg) s += '-';

        reverse(s.begin(), s.end());
        return s;
    }
};