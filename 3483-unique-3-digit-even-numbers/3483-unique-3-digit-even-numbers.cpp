class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int n = digits.size();
        int f[10] = {};
        int ans = 0;
        
        for (int d : digits)
            f[d]++;

        for (int a =1; a<= 9; a++) {
            for (int b=0; b<= 9; b++) {
                for (int c= 0; c<= 8; c+= 2) {

                    int needA = 1 +(a == b) + (a == c);
                    int needB = (b!= a) + (b == c);
                    int needC =(c != a && c != b);

                    if (f[a] >= needA && f[b] >= needB && f[c] >= needC) {
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};