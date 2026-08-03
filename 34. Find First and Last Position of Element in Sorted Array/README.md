# 📌 Search Range (First & Last Position of Element)

## 🧠 Problem Statement

Given a **sorted array** `nums` and a target value, return the **starting and ending position** of the target.

* If target is not found → return `[-1, -1]`
* Time complexity must be **O(log n)**

---

## 💡 Approach (Binary Search)

We use **binary search twice**:

### 1️⃣ Find First Occurrence

* When `nums[mid] == target`:

  * Store index in `ans[0]`
  * Move **left** → `ed = mid - 1`
* Reason: There might be another occurrence on the left

---

### 2️⃣ Find Last Occurrence

* When `nums[mid] == target`:

  * Store index in `ans[1]`
  * Move **right** → `st = mid + 1`
* Reason: There might be another occurrence on the right

---

## 🔁 Algorithm Steps

1. Initialize answer as `[-1, -1]`
2. Run binary search to find **first occurrence**
3. Run binary search to find **last occurrence**
4. Return result

---

## 🧪 Example

```
nums = [5,7,7,8,8,10]
target = 8
```

Output:

```
[3,4]
```

---

## ⏱ Complexity

* **Time:** `O(log n)`
* **Space:** `O(1)`

---

## 🎯 Key Insight

After finding the target, **don’t stop** — keep searching:

* Left → for first occurrence
* Right → for last occurrence


