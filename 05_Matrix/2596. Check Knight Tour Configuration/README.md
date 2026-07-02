# Check Knight Tour Configuration

## Intuition

A valid knight's tour must visit every cell exactly once in increasing order from `0` to `n² - 1`.

Starting from the cell containing `0`, each next number must be reachable using a valid knight move.

The idea is to recursively verify that:

0 → 1 → 2 → 3 → ... → n² - 1
```

follows the movement rules of a knight.
---

## Approach

We use a recursive DFS/backtracking-style solution.

### Step 1: Validate Starting Position

The tour must start from the top-left corner.

if(grid[0][0] != 0)
    return false;
```

If the first cell does not contain `0`, the configuration is invalid.

---

### Step 2: Recursive Validation

We define:

isValid(grid, row, col, expVal)
```

where:

- `row` and `col` represent the current position.
- `expVal` is the value expected at that position.

The function first checks:

```cpp
if(row < 0 || col < 0 || row >= n || col >= n)
    return false;
```

to ensure the position is inside the board.

Then:

```cpp
if(grid[row][col] != expVal)
    return false;
```

to verify that the current cell contains the expected value.

---

### Step 3: Base Case

If we reach the last number:

if(expVal == n*n - 1)
    return true;
```

then the entire tour is valid.

---

### Step 4: Explore Knight Moves

A knight has 8 possible moves:

```text
(row-2, col+1)
(row-1, col+2)
(row+1, col+2)
(row+2, col+1)
(row+2, col-1)
(row+1, col-2)
(row-1, col-2)
(row-2, col-1)
```

For every move we recursively search for:

expVal + 1
```

Example:
isValid(grid, row-2, col+1, expVal+1);
```

If any recursive path reaches the final value successfully, the tour is valid.

---

## Recursive Flow

Suppose:
Current Value = 0
Need to Find = 1
```

The recursion tree looks like:

```text
isValid(0,0,0)
│
├── Move 1 → false
├── Move 2 → false
└── Move 3 → isValid(1,2,1)
                │
                ├── Move 1 → false
                ├── Move 2 → false
                └── Move 6 → isValid(2,0,2)
                                │
                                └── ...
```

Each recursive call searches for the next value:
isValid(...,0) → searches for 1
isValid(...,1) → searches for 2
isValid(...,2) → searches for 3
isValid(...,3) → searches for 4
```

and so on until the last value is reached.

---

## Why This Works

At every step:

1. The current cell must contain the expected value.
2. The next value must be reachable through a valid knight move.
3. If all values from `0` to `n²-1` satisfy this condition, the configuration is a valid knight's tour.

The recursion guarantees that every consecutive number is checked in order.

---

## Complexity Analysis

Let:
N = n²
```

### Time Complexity

Worst Case:

O(8^N)
```

because each state can explore up to 8 knight moves.

### Space Complexity

O(N)

for the recursion stack.


## Key Takeaway

The recursive call:

isValid(..., expVal + 1)
```

is the core of the solution.

Each recursive level verifies that the next number in the sequence can be reached by a valid knight move, ensuring the entire knight tour follows the required order.