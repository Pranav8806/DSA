🔢 Single Number
🔗 Problem Link

https://leetcode.com/problems/single-number/

📌 Problem Statement

Given a non-empty array of integers nums, every element appears twice except for one.
Find that single element.

✅ Constraints:
Must run in O(n) time complexity
Must use constant extra space
💡 Approach

The problem can be efficiently solved using the Bitwise XOR (^) operation.

🔑 Key Properties of XOR:
a ^ a = 0 (same numbers cancel out)
a ^ 0 = a
XOR is commutative and associative
🚀 Idea:
XOR all elements in the array
Duplicate elements cancel each other
The remaining value is the single number
⏱️ Complexity Analysis
Time Complexity: O(n)
Space Complexity: O(1)
🧠 Example

Input:
[2, 2, 1]

Output:
1

Explanation:
2 ^ 2 = 0
0 ^ 1 = 1