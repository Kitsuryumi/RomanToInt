class Solution {
public:
    int romanToInt(string s) {
        int res = 0;
        int n = s.size();
        int i = n - 1;
        int cant = 0;
        char actual = s[i];
        do {
            switch (s[i]) {
            case 'I':
                if (actual == 'V' || actual == 'X') {
                    res--;
                } else {
                    res++;
                }
                break;
            case 'V':
                res = res + 5;
                break;
            case 'X':
                if (actual == 'L' || actual == 'C') {
                    res = res - 10;
                } else {
                    res = res + 10;
                }
                break;
            case 'L':
                res = res + 50;
                break;
            case 'C':
                if (actual == 'D' || actual == 'M') {
                    res = res - 100;
                } else {
                    res = res + 100;
                }
                break;
            case 'D':
                res = res + 500;
                break;
            case 'M':
                res = res + 1000;
                break;
            }
            actual = s[i];
            i--;
        } while (i >= 0);
        return res;
    }
};