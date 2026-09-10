class Solution {
public:
    int countDigits(int num) {
        int cnt = 0;
        int temp = num;
        while (temp) {
            int rem = temp % 10;
            if (num % rem == 0)
                cnt++;

            temp /= 10;
        }
        return cnt;
    }
};