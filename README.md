# Sorting Algorithms in C++

This repository contains implementations of six fundamental sorting algorithms in C++.  
Each file is a standalone program that:
- Reads a list of integers from input (Ctrl+D / Ctrl+Z),
- Sorts the list using a specific algorithm,
- Outputs the sorted list.

---

## 📚 Algorithms Included

| Algorithm       | Type               | Average Time Complexity | Notes                                    |
|----------------|--------------------|--------------------------|------------------------------------------|
| Bubble Sort     | Simple iterating   | O(n²)                    | Self-optimizing with early-exit flag     |
| Selection Sort  | Simple selecting   | O(n²)                    | Minimizes write operations               |
| Insertion Sort  | Incremental build  | O(n²)                    | Efficient for small or nearly sorted data|
| Merge Sort      | Divide-and-conquer | O(n log n)               | Uses extra space, stable algorithm       |
| Quick Sort      | Divide-and-conquer | O(n log n) avg, O(n²) worst | Fast in practice, pivot-based         |
| Heap Sort       | Heap-based         | O(n log n)               | In-place, not stable                     |

---
