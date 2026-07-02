# 239. Sliding Window Maximum

## Problem Statement
Given an integer array `nums` and an integer `k`, return an array containing the maximum element of every contiguous subarray (sliding window) of size `k`.

### Example
**Input**
```text
nums = [1,3,-1,-3,5,3,6,7], k = 3
```

**Output**
```text
[3,3,5,5,6,7]
```

---

## Approach

This solution uses a **Deque (Double-Ended Queue)** to efficiently keep track of the indices of useful elements for the current sliding window.

### Key Idea

- Store **indices** instead of values.
- The deque maintains elements in **decreasing order of their values**.
- The **front** of the deque always contains the index of the maximum element in the current window.

### Steps

1. Process the first `k` elements.
   - Remove all smaller elements from the back.
   - Insert the current index.

2. For every remaining element:
   - The front of the deque is the maximum of the previous window.
   - Remove indices that are outside the current window.
   - Remove all smaller elements from the back since they can never become maximum.
   - Insert the current index.

3. Add the maximum of the last window to the answer.

---

## Dry Run

### Input
```text
nums = [1,3,-1,-3,5,3,6,7]
k = 3
```

### Window 1 → [1,3,-1]

Deque stores indices:
```text
[1,2]
```

Maximum:
```text
3
```

---

### Window 2 → [3,-1,-3]

Remove expired indices if any.

Deque:
```text
[1,2,3]
```

Maximum:
```text
3
```

---

### Window 3 → [-1,-3,5]

Remove expired index 1.

After inserting 5:

Deque:
```text
[4]
```

Maximum:
```text
5
```

Similarly,

```text
[-3,5,3] → 5
[5,3,6] → 6
[3,6,7] → 7
```

Final Answer:

```text
[3,3,5,5,6,7]
```

---

## Why Deque?

The deque stores only the **useful candidates** for maximum.

- Smaller elements behind a larger element are removed because they can never become the maximum while the larger element exists.
- Expired indices are removed from the front.

Thus, every element is inserted and removed at most once.

---

## Complexity Analysis

- **Time Complexity:** **O(n)**
  - Each element is inserted into and removed from the deque at most one time.

- **Space Complexity:** **O(k)**
  - The deque stores at most `k` indices.

---

## Data Structures Used

- `deque<int>` — Maintains indices of potential maximum elements.
- `vector<int>` — Stores the final answer.

---

## Algorithm

```text
Initialize an empty deque.

Process first k elements:
    Remove smaller elements from the back.
    Push current index.

For each remaining element:
    Store deque front as answer.
    Remove expired indices.
    Remove smaller elements from the back.
    Push current index.

Store maximum of the last window.

Return answer.
```

---

## Concepts Used

- Sliding Window
- Monotonic Deque
- Queue
- Greedy Data Structure
- Arrays