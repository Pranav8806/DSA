# Merge K Sorted Lists

## Problem Statement

You are given an array of `k` sorted linked lists. Merge all the linked lists into one sorted linked list and return its head.

### Example

**Input:**
```text
lists = [[1,4,5],[1,3,4],[2,6]]
```

**Output:**
```text
[1,1,2,3,4,4,5,6]
```

---

## Approach

This solution uses a **Min Heap (Priority Queue)** to efficiently merge all the sorted linked lists.

### Algorithm

1. Create a min heap that stores:
   - Node value
   - Pointer to the corresponding linked list node

2. Insert the head node of every non-empty linked list into the priority queue.

3. While the priority queue is not empty:
   - Remove the smallest node.
   - Attach it to the merged linked list.
   - If the removed node has a next node, insert it into the priority queue.

4. Return the merged linked list.

---

## Dry Run

Input:

```text
List1: 1 → 4 → 5
List2: 1 → 3 → 4
List3: 2 → 6
```

Initial Priority Queue:

```text
(1,L1) (1,L2) (2,L3)
```

Process:

```text
Pop 1 → Answer: 1
Push 4

Pop 1 → Answer: 1 → 1
Push 3

Pop 2 → Answer: 1 → 1 → 2
Push 6

Pop 3 → Answer: 1 → 1 → 2 → 3
Push 4

Pop 4 → Answer: 1 → 1 → 2 → 3 → 4
Push 5

Pop 4 → Answer: 1 → 1 → 2 → 3 → 4 → 4

Pop 5 → Answer: 1 → 1 → 2 → 3 → 4 → 4 → 5

Pop 6 → Answer: 1 → 1 → 2 → 3 → 4 → 4 → 5 → 6
```

---

## Complexity Analysis

### Time Complexity

- Each node is inserted into the priority queue once.
- Each node is removed from the priority queue once.
- Every heap operation takes **O(log k)**.

**Overall Time Complexity:**

```text
O(N log k)
```

where:

- **N** = Total number of nodes across all linked lists
- **k** = Number of linked lists

### Space Complexity

The priority queue stores at most one node from each linked list.

```text
O(k)
```

---

## Key Concepts Used

- Linked Lists
- Min Heap (Priority Queue)
- Greedy Algorithm
- STL `priority_queue`
- `pair<int, ListNode*>`

---

## STL Syntax Used

```cpp
priority_queue<
    pair<int, ListNode*>,
    vector<pair<int, ListNode*>>,
    greater<pair<int, ListNode*>>
> pq;
```

This creates a **min heap** where the smallest node value is always at the top, allowing efficient merging of all sorted linked lists.