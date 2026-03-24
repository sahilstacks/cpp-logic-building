# First Repeating Element

## Problem Description
Given an array `arr[]`, find the **first repeating element**. The element should occur more than once, and its first occurrence should have the **smallest index** in the array.

### Constraints & Requirements
* The position (index) returned should be **1-based**.
* If no repeating element exists, return `-1`.
* The priority is the "earliest first appearance," not the first duplicate found.

---

## Logic Overview
To solve this, we identify the number that appears more than once and has the minimum starting index.

**Example Case:**
`arr[] = [1, 5, 3, 4, 3, 5, 6]`

1.  **Number 5:** Appears at index 2 and index 6. (First appearance: **Index 2**)
2.  **Number 3:** Appears at index 3 and index 5. (First appearance: **Index 3**)

Since **Index 2 < Index 3**, the answer is **2**.

---

## Sample Outputs

### Case 1: Repeating Element Found
**Input:** `arr[] = [1, 5, 3, 4, 3, 5, 6]`
**Output:**
```text
The first repeating element is found at index: 2

