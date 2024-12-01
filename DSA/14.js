// 69. Sqrt(x)
// Easy
// Topics
// Companies
// Hint
// Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

// You must not use any built-in exponent function or operator.

// For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.
 

// Example 1:

// Input: x = 4
// Output: 2
// Explanation: The square root of 4 is 2, so we return 2.
// Example 2:

// Input: x = 8
// Output: 2
// Explanation: The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned.


var mySqrt = function (x) {
    if (x<0){
        return NAN
    }
    if (x===0 || x===1){
        return x
    }
    
    let left = 0, right = x
    while (left <= right) {
        let mid = (left + right) / 2
        if (mid ** mid === x) {
            return mid
        } else if (mid ** mid > x) {
            right -= 1
        } else if (mid ** mid < x) {
            left += 1
        }
    }

    return right
};


// ### Example with \( x = 8 \):

// 1. **Initial Range:** We start with `left = 0` and `right = 8`.
// 2. **First Midpoint Calculation:** 
//    - `mid = Math.floor((0 + 8) / 2) = 4`
//    - \( 4^2 = 16 \), which is greater than 8, so we know that the square root is less than 4.
//    - We update `right = 3`.
// 3. **Second Midpoint Calculation:** 
//    - `mid = Math.floor((0 + 3) / 2) = 1`
//    - \( 1^2 = 1 \), which is less than 8, so we move `left = 2`.
// 4. **Third Midpoint Calculation:** 
//    - `mid = Math.floor((2 + 3) / 2) = 2`
//    - \( 2^2 = 4 \), which is less than 8, so we update `left = 3`.
// 5. **Final Midpoint Calculation:**
//    - `mid = 3`
//    - \( 3^2 = 9 \), which is greater than 8, so we update `right = 2`.
// 6. **End of Search:** At this point, `left` has passed `right`, and the closest integer square root is the `right` value, which is 2.

// ### Why Not Just Try All Numbers?

// You could theoretically loop from 0 to \( x \) and check each number, but that would take \( O(x) \) time, which is much slower for large values of \( x \). 

// By using binary search, the time complexity reduces to \( O(\log(x)) \), which is much faster because it halves the search space at each step.

// ### Conclusion:

// Even though \( x \) is a single number, the reason we use `left` and `right` pointers is to apply binary search, which efficiently finds the integer square root in \( O(\log(x)) \) time. This approach works by continuously halving the range of possible values for the square root, making it much more efficient than checking every possible value from 0 to \( x \).

