/*
35. Search Insert Position
Solved
Easy
Topics
Companies
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1
Example 3:

Input: nums = [1,3,5,6], target = 7
Output: 4
 
*/

var searchInsert = function (nums, target) {
  // solution1
  // for (let i = 0; i < nums.length; i++) {
  //     if (nums[i] === target) {
  //         return i
  //     }
  //     else {
  //         nums.push(target)
  //         nums.sort((a, b) => a - b);

  //         return nums.indexOf(target)
  //     }
  // }

  //solution 2

  let left = 0,
    right = nums.length - 1;

  while (left <= right) {
    let mid = Math.floor((left + right) / 2);

    if (nums[mid] === target) {
      return mid;
    } else if (nums[mid] < target) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }

  return left;
};
