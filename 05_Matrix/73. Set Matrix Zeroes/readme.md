# Set Matrix Zeroes

## Problem

Given an `m × n` matrix, if an element is `0`, set its entire row and column to `0`.

The transformation must be done **in-place**.

### Example

```text
Input:

1 1 1
1 0 1
1 1 1

Output:

1 0 1
0 0 0
1 0 1
```

---

## Intuition

A straightforward solution would be:

1. Store all rows containing a zero.
2. Store all columns containing a zero.
3. Traverse the matrix again and update cells.

However, this requires extra space.

We can optimize the space by using:

- First row as a marker for columns.
- First column as a marker for rows.

This allows us to perform the operation in-place using constant extra space.

---

## Approach

### Step 1: Check First Row

If the first row already contains a zero, we need to remember it.

```cpp
bool firstrow = false;
```

```cpp
for(int i=0;i<n;i++){
    if(matrix[0][i]==0){
        firstrow=true;
        break;
    }
}
```

---

### Step 2: Check First Column

Similarly, check whether the first column contains a zero.

```cpp
bool firstcol = false;
```

```cpp
for(int i=0;i<m;i++){
    if(matrix[i][0]==0){
        firstcol=true;
        break;
    }
}
```

---

### Step 3: Mark Rows and Columns

Traverse the matrix excluding the first row and first column.

Whenever a zero is found:

```cpp
matrix[i][0] = 0;
matrix[0][j] = 0;
```

These cells act as markers indicating:

- Row `i` should become zero.
- Column `j` should become zero.

```cpp
for(int i=1;i<m;i++){
    for(int j=1;j<n;j++){
        if(matrix[i][j]==0){
            matrix[i][0]=0;
            matrix[0][j]=0;
        }
    }
}
```

---

### Example

```text
Initial Matrix

1 1 1 1
1 0 1 1
1 1 1 0
1 1 1 1
```

After marking:

```text
1 0 1 0
0 0 1 1
0 1 1 0
1 1 1 1
```

Notice:

```text
matrix[1][0] = 0
matrix[2][0] = 0

matrix[0][1] = 0
matrix[0][3] = 0
```

These are markers only.

---

### Step 4: Fill Zeroes Using Markers

Now traverse the matrix again.

If either:

```cpp
matrix[i][0]==0
```

or

```cpp
matrix[0][j]==0
```

then the cell must become zero.

```cpp
for(int i=1;i<m;i++){
    for(int j=1;j<n;j++){
        if(matrix[i][0]==0 || matrix[0][j]==0){
            matrix[i][j]=0;
        }
    }
}
```

---

### Step 5: Handle First Row

If the first row originally contained a zero:

```cpp
if(firstrow){
    for(int i=0;i<n;i++){
        matrix[0][i]=0;
    }
}
```

---

### Step 6: Handle First Column

If the first column originally contained a zero:

```cpp
if(firstcol){
    for(int i=0;i<m;i++){
        matrix[i][0]=0;
    }
}
```

---

## Dry Run

### Input

```text
1 1 1
1 0 1
1 1 1
```

### Marking Phase

Zero found at:

```text
(1,1)
```

Mark:

```text
matrix[1][0]=0
matrix[0][1]=0
```

Matrix becomes:

```text
1 0 1
0 0 1
1 1 1
```

---

### Fill Phase

Using markers:

```text
1 0 1
0 0 0
1 0 1
```

---

### Final Answer

```text
1 0 1
0 0 0
1 0 1
```

---

## Why First Row and First Column Need Special Handling

The first row and first column are being used as marker storage.

Therefore, before modifying them, we must remember whether they originally contained a zero.

This is why we use:

```cpp
bool firstrow
bool firstcol
```

Without these flags, we would lose the original information.

---

## Complexity Analysis

### Time Complexity

```text
O(m × n)
```

We traverse the matrix a constant number of times.

### Space Complexity

```text
O(1)
```

Only two boolean variables are used.

---

## Key Insight

Use the first row and first column as marker arrays.

```cpp
matrix[i][0]
```

marks rows.

```cpp
matrix[0][j]
```

marks columns.

This eliminates the need for extra storage and achieves the required constant space solution.