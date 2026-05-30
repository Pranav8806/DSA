# Design Circular Queue (LeetCode 622)

## Problem Statement
Design a circular queue that supports the following operations:

- `enQueue(value)` → Insert an element into the circular queue.
- `deQueue()` → Delete an element from the circular queue.
- `Front()` → Get the front element.
- `Rear()` → Get the last element.
- `isEmpty()` → Check whether the queue is empty.
- `isFull()` → Check whether the queue is full.

A circular queue connects the last position back to the first position, allowing efficient reuse of space.

---

## Approach

This implementation uses:

- A fixed-size `vector<int>` to store queue elements.
- Two pointers:
  - `front` → Points to the first element.
  - `rear` → Points to the last element.
- Modular arithmetic (`%`) to wrap around the array and simulate a circular structure.

### Key Idea

To move to the next position in a circular queue:

(next_index) = (current_index + 1) % size;
```

This ensures that after reaching the last index, we return to index `0`.

---

## Algorithm

### Enqueue Operation

1. If the queue is empty:
   - Set `front = rear = 0`.
   - Insert the element.
2. If the queue is full:
   - Return `false`.
3. Otherwise:
   - Move `rear` to the next circular position.
   - Insert the element.

### Dequeue Operation

1. If the queue is empty:
   - Return `false`.
2. If only one element exists:
   - Reset `front` and `rear` to `-1`.
3. Otherwise:
   - Move `front` to the next circular position.

### Full Queue Condition

(rear + 1) % size == front
```

If the next position of `rear` reaches `front`, the queue is considered full.

### Empty Queue Condition

front == -1


## Complexity Analysis

| Operation | Time Complexity | Space Complexity |
|------------|----------------|------------------|
| enQueue() | O(1) | O(1) |
| deQueue() | O(1) | O(1) |
| Front() | O(1) | O(1) |
| Rear() | O(1) | O(1) |
| isEmpty() | O(1) | O(1) |
| isFull() | O(1) | O(1) |

Overall Space Used:

O(k)
```

where `k` is the queue capacity.

## Key Learning

The modulo operator (`%`) is what makes the queue circular:

rear = (rear + 1) % size;
front = (front + 1) % size;
```

Without it, the queue would behave like a normal linear queue and would not be able to reuse freed spaces at the beginning of the array.