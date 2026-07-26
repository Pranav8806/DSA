# 138. Copy List with Random Pointer

## Problem Statement

Given a linked list where each node contains an additional `random` pointer that can point to any node in the list or `NULL`, create a **deep copy** of the list.

A deep copy means:
- Every node in the new list is newly created.
- Both the `next` and `random` pointers should replicate the structure of the original list.
- No pointer in the copied list should point to any node in the original list.

---

## Approach

This solution uses a **HashMap (`unordered_map`)** to maintain a mapping between each original node and its corresponding copied node.

### Step 1: Create all copied nodes

- Traverse the original list.
- Create a new node for each original node.
- Connect the copied nodes using the `next` pointer.
- Store the mapping:

```
Original Node  ->  Copied Node
```

Example:

```
A -> A'
B -> B'
C -> C'
```

---

### Step 2: Assign Random Pointers

Traverse both lists simultaneously.

For every original node:

```cpp
copy->random = mp[original->random];
```

Since the HashMap already contains the copied version of every original node, assigning random pointers becomes straightforward.

---

## Algorithm

1. If the list is empty, return `NULL`.
2. Create the head node of the copied list.
3. Traverse the original list and:
   - Create copies of every node.
   - Store `original → copy` mapping.
4. Traverse both lists again.
5. Assign random pointers using the HashMap.
6. Return the head of the copied list.

---

## Complexity Analysis

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(n)`

where `n` is the number of nodes in the linked list.

---

## Data Structure Used

- `unordered_map<Node*, Node*>`

The HashMap stores the relationship between original nodes and their copied counterparts, enabling constant-time access while assigning random pointers.

---

## Key Concept

The random pointer of a copied node should point to the **copied version** of the original node's random pointer, not the original node itself.

```
Original:
A.random -> C

Mapping:
A -> A'
C -> C'

Copied:
A'.random -> C'
```

---

## Tags

- Linked List
- Hash Map
- Deep Copy
- Data Structures
- LeetCode 138