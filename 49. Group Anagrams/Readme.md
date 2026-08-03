# Group Anagrams

## Problem Statement

Given an array of strings, group the anagrams together.
Anagrams are words formed by rearranging the letters of another word using all the original characters exactly once.

---

## Approach

The solution uses a **hash map (unordered_map)** to group words that are anagrams of each other.

### Key Idea

* Two strings are anagrams if their sorted forms are the same.
* Example:

  * `"eat"` → `"aet"`
  * `"tea"` → `"aet"`

Since both sorted strings are identical, they belong to the same group.

---

## Algorithm

1. Create an unordered map where:

   * **Key** = Sorted version of the string
   * **Value** = List of strings having the same sorted form

2. Traverse each string in the input array:

   * Make a temporary copy of the string
   * Sort the temporary string
   * Use the sorted string as the key in the map
   * Store the original string in the corresponding group

3. Traverse the map and store all grouped anagrams into the final answer vector.

---

## Example

### Input

["eat","tea","tan","ate","nat","bat"]

### Sorted Forms

* eat → aet
* tea → aet
* tan → ant
* ate → aet
* nat → ant
* bat → abt

### Grouped Output

[
["eat","tea","ate"],
["tan","nat"],
["bat"]
]

---

## Time Complexity

### Sorting Each String

If:

* `n` = number of strings
* `k` = maximum length of a string

Sorting one string takes:
O(k log k)

For all strings:
O(n * k log k)

---

## Space Complexity

* Hash map stores all strings
* Extra space used:
  O(n * k)

---

## Concepts Used

* Hash Map (`unordered_map`)
* Strings
* Sorting
* Vectors

