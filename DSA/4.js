/*
14. Longest Common Prefix
Easy
Topics
Companies
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
*/

//solution 

var longestCommonPrefix = function (strs) {
    let prefix = strs[0]
    let pref = prefix.length

    for (let i = 0; i < strs.length; i++) {
        let temp = strs[i]

        while (prefix !== temp.slice(0, pref)) {
            pref--
            if (pref === 0) {
                return ""
            }
            prefix = prefix.slice(0, pref)
        }
    }
    return prefix
};
