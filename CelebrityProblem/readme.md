# Celebrity Problem (Stack Approach)

## Problem Statement
Given an `N x N` matrix `M` where:

- `M[i][j] = 1` means person `i` knows person `j`.
- `M[i][j] = 0` means person `i` does not know person `j`.

A **celebrity** is a person who:
1. Knows **no one**.
2. Is **known by everyone else**.

Return the index of the celebrity if one exists; otherwise return `-1`.

---

## Approach

### Step 1: Push all people into a stack
Initially, every person is a possible celebrity.

### Step 2: Eliminate non-celebrities
Pop two people `i` and `j`.

- If `i` knows `j`, then `i` **cannot** be the celebrity.
- Otherwise, `j` **cannot** be the celebrity.

Push the remaining candidate back into the stack.

Repeat until only one candidate remains.

### Step 3: Verify the candidate
The remaining person is only a **potential celebrity**.

Check:
- They should **not know anyone**.
- Everyone else should **know them**.

If either condition fails, return `-1`.

Otherwise, return the celebrity index.

---

## Algorithm

1. Push all indices into a stack.
2. While stack size > 1:
   - Pop two people.
   - Eliminate one based on the "knows" relationship.
3. The remaining person is the candidate.
4. Verify:
   - Candidate knows nobody.
   - Everyone knows the candidate.
5. Return the candidate if valid; otherwise return `-1`.

---

## Dry Run

### Input

```cpp
arr = {
    {0,1,0},
    {0,0,0},
    {0,1,0}
};
```

People:
- Person 0 knows 1
- Person 1 knows nobody
- Person 2 knows 1

Initial Stack

```
[0, 1, 2]
```

### Iteration 1

Pop:

```
i = 2
j = 1
```

Since

```
arr[2][1] = 1
```

Person 2 knows Person 1.

Therefore Person 2 cannot be the celebrity.

Push Person 1.

Stack:

```
[0, 1]
```

---

### Iteration 2

Pop:

```
i = 1
j = 0
```

Since

```
arr[1][0] = 0
```

Person 1 does not know Person 0.

Therefore Person 0 cannot be the celebrity.

Push Person 1.

Stack:

```
[1]
```

Candidate:

```
1
```

---

### Verification

Check row of candidate:

```
0 0 0
```

Candidate knows nobody ✅

Check column of candidate:

```
1
0
1
```

Everyone except themselves knows them ✅

Hence celebrity is:

```
1
```

---

## Time Complexity

- Elimination Process: **O(N)**
- Verification: **O(N)**

**Overall:** `O(N)`

---

## Space Complexity

- Stack stores all people.

**Space:** `O(N)`

---

## Output

```
Celebrity = 1
```

