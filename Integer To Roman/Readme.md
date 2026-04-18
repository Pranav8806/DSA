# Integer to Roman Converter (C++)

## Overview

This program converts an integer into its corresponding Roman numeral using a greedy approach.

---

## Approach

* Store integer values and Roman symbols in descending order
* Traverse the list and subtract the largest possible value
* Append the corresponding Roman symbol to the result

---

## Code

```cpp
class Solution {
public:
    string intToRoman(int num) {
        vector<pair<int,string>> p = {
            {1000,"M"}, {900,"CM"}, {500,"D"}, {400,"CD"},
            {100,"C"}, {90,"XC"}, {50,"L"}, {40,"XL"},
            {10,"X"}, {9,"IX"}, {5,"V"}, {4,"IV"}, {1,"I"}
        };
        
        string ans = "";
        int i = 0;
        
        while(num != 0){
            if(p[i].first > num) i++;
            else{
                ans += p[i].second;
                num -= p[i].first;
            }
        }
        return ans;
    }
};
```

---

## Example

Input:
num = 58

Output:
LVIII

---

## Complexity

Time Complexity: O(1)
Space Complexity: O(1)

---

## Conclusion

Uses a greedy method to efficiently convert integers to Roman numerals.
