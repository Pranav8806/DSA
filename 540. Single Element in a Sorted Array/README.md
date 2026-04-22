# 📘 Single Element in a Sorted Array

## 🔍 Problem

Given a **sorted array** where every element appears **exactly twice except one element**, find that single element.

---

## ⚙️ Approach (Binary Search)

### 💡 Key Idea

* In a valid pair:

  * First occurrence → **even index**
  * Second occurrence → **odd index**
* When this pattern breaks → single element lies nearby

---

## 🚀 Steps

### 1. Initialize pointers

* `start = 0`, `end = n - 1`

---

### 2. Edge cases

* If array has only one element → return it
* If first element is unique → return `nums[0]`
* If last element is unique → return `nums[n-1]`

---

### 3. Binary Search

* Find `mid`
* Check if it's the single element:

  * `nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]`

---

### 4. Decide search direction

#### 👉 If `mid` is even:

* If `nums[mid] == nums[mid-1]`
  → move left (`end = mid - 1`)
* Else
  → move right (`start = mid + 1`)

#### 👉 If `mid` is odd:

* If `nums[mid] == nums[mid-1]`
  → move right (`start = mid + 1`)
* Else
  → move left (`end = mid - 1`)

---

## ⏱️ Complexity

* Time: **O(log n)**
* Space: **O(1)**

---

## 📌 Example

Input: `[1,1,2,3,3,4,4,8,8]`
Output: `2`

---

## 🧠 Key Insight

Before the single element:

* pairs follow `(even, odd)`

After the single element:

* pattern shifts to `(odd, even)`

