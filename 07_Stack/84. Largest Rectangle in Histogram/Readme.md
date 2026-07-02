# Largest Rectangle in Histogram

## Problem Statement

Given an array `heights[]` where each element represents the height of a histogram bar of width `1`, find the area of the largest rectangle that can be formed in the histogram.

---

## Approach (Using Monotonic Stack)

For every bar, determine:

- **Nearest Smaller Element to the Left (NSL)**
- **Nearest Smaller Element to the Right (NSR)**

These two indices give the maximum width over which the current bar can extend while remaining the smallest bar in the rectangle.

Then,

```
Width = NSR - NSL - 1
Area = Height × Width
```

Compute the area for every bar and return the maximum.

---

## Algorithm

### Step 1: Find Nearest Smaller to Right (NSR)

Traverse from right to left.

- Remove all bars that are greater than or equal to the current bar.
- If the stack becomes empty, no smaller element exists on the right, so store `n`.
- Otherwise, store the index of the nearest smaller element.

---

### Step 2: Find Nearest Smaller to Left (NSL)

Traverse from left to right.

- Remove all bars greater than or equal to the current bar.
- If the stack becomes empty, no smaller element exists on the left, so store `-1`.
- Otherwise, store the nearest smaller index.

---

### Step 3: Calculate Maximum Area

For every index:

```
Width = rightsm[i] - leftsm[i] - 1
Area = heights[i] × Width
```

Return the maximum area obtained.

---

## Dry Run

### Input

```cpp
heights = [2,1,5,6,2,3]
```

---

### Nearest Smaller to Right

| Index | Height | NSR |
|------:|-------:|----:|
|0|2|1|
|1|1|6|
|2|5|4|
|3|6|4|
|4|2|6|
|5|3|6|

```
rightsm = [1,6,4,4,6,6]
```

---

### Nearest Smaller to Left

| Index | Height | NSL |
|------:|-------:|----:|
|0|2|-1|
|1|1|-1|
|2|5|1|
|3|6|2|
|4|2|1|
|5|3|4|

```
leftsm = [-1,-1,1,2,1,4]
```

---

### Area Calculation

|Index|Height|Width|Area|
|----:|-----:|----:|---:|
|0|2|1|2|
|1|1|6|6|
|2|5|2|10|
|3|6|1|6|
|4|2|4|8|
|5|3|1|3|

Maximum Area:

```
10
```

---

## Why Width = NSR - NSL - 1 ?

Suppose

```
NSL = 1
Current = 3
NSR = 6
```

```
Index

0 1 2 3 4 5 6
  |-----|
   Rectangle
```

The rectangle can extend only between

```
2 ... 5
```

Number of bars

```
6 - 1 - 1 = 4
```

Hence,

```
Width = NSR - NSL - 1
```

---

## Why use `>=` in the stack?

```cpp
while(!s.empty() && heights[s.top()] >= heights[i])
    s.pop();
```

Using `>=` removes bars of equal height as well.

This ensures:

- Every bar gets the maximum possible width.
- Duplicate heights do not block each other.
- Prevents incorrect rectangle widths.

---

## Time Complexity

- Finding NSR: **O(N)**
- Finding NSL: **O(N)**
- Area Calculation: **O(N)**

**Overall:** `O(N)`

---

## Space Complexity

- Stack: `O(N)`
- NSR array: `O(N)`
- NSL array: `O(N)`

**Overall:** `O(N)`

---

## Output

For

```cpp
heights = [2,1,5,6,2,3]
```

Output:

```
10
```
