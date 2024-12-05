/*
3133. Minimum Array End
Medium

Example 1:

Input: n = 3, x = 4

Output: 6

Explanation:

nums can be [4,5,6] and its last element is 6.

Example 2:

Input: n = 2, x = 7

Output: 15

Explanation:

nums can be [7,15] and its last element is 15.
*/



#include <bitset>
class Solution {
public:
    long long minEnd(int n, int x) {
        std::bitset<64> X(x), N(n - 1), result(0);

        int j = 0;
        for (int i = 0; i < 64; i++) {
            if (X[i]) {
                result[i] = 1;
            } else {
                result[i] = N[j];
                j++;
            }
        }

        return result.to_ullong();
    }
};