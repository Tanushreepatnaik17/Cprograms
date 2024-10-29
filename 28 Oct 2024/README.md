# C Program Logic and Code Implementation

This repository contains a C program that performs various operations based on specific conditions for given variables. Below is the explanation of the logic implemented in the program.

---

## (a) Multiply Product by Item if Item is Nonzero

**Objective**: Multiply `product` by `item` only if `item` is nonzero, and then print the value of `product`.

**Logic**:
- **Check if `item` is nonzero**: If it’s not zero, multiply `product` by `item`.
- **Skip multiplication if `item` is zero**: In this case, `product` remains unchanged.
- **Print the result**: Print the value of `product`, which will either have changed (if `item` was nonzero) or stayed the same (if `item` was zero).

**Code**:
```c
#include <stdio.h>

int main() {
    int product = 10;  // Initialize product
    int item = 5;      // Initialize item (modify as needed)

    if (item != 0) {
        product *= item;   // Multiply product by item if nonzero
    }
    printf("The value of product is: %d\n", product);  // Print result

    return 0;
}
```



## (b) Store the Absolute Difference Between x and y in y

**Objective**: Calculate and store the absolute difference between `x` and `y` in `y` without using built-in functions like `abs` or `fabs`.

**Logic**:
- **Calculate the positive difference**:
  - If `x > y`, the difference is calculated as `x - y`.
  - If `y >= x`, the difference is calculated as `y - x`.
- **Store in `y`**: Save this positive difference in `y`, effectively giving the absolute difference.

**Code**:
```c
#include <stdio.h>

int main() {
    int x = 8;  // Example value for x
    int y = 3;  // Example value for y

    if (x > y) {
        y = x - y;   // Store (x - y) if x is greater
    } else {
        y = y - x;   // Store (y - x) if y is greater or equal
    }
    printf("The absolute difference is: %d\n", y);

    return 0;
}
```


## (c) Update Counters and Sums Based on the Value of x

**Objective**: 
- Increment a counter if `x` is zero.
- Sum negative values of `x` in `minus_sum`.
- Sum positive values of `x` in `plus_sum`.

**Logic**:
- **Check if `x` is zero, positive, or negative**:
  - If `x == 0`: Increment `zero_count` by 1.
  - If `x < 0`: Add `x` to `minus_sum` (accumulates negative values).
  - If `x > 0`: Add `x` to `plus_sum` (accumulates positive values).
- **Maintain distinct counters and sums**: Track occurrences of zero, total negative values, and total positive values separately.

**Code**:
```c
#include <stdio.h>

int main() {
    int x = -5;          // Example value for x
    int zero_count = 0;   // Counter for zero values of x
    int minus_sum = 0;    // Sum for negative values of x
    int plus_sum = 0;     // Sum for positive values of x

    if (x == 0) {
        zero_count++;    // Increment zero_count if x is 0
    } else if (x < 0) {
        minus_sum += x;  // Add x to minus_sum if x is negative
    } else {
        plus_sum += x;   // Add x to plus_sum if x is positive
    }

    // Print the results
    printf("Zero count: %d\n", zero_count);
    printf("Minus sum: %d\n", minus_sum);
    printf("Plus sum: %d\n", plus_sum);

    return 0;
}
```
