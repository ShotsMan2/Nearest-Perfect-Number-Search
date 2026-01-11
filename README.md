# Nearest Perfect Number Search Algorithm

This project implements a numerical search algorithm in C designed to find the **largest Perfect Number** strictly smaller than a given input integer $N$.

## 🧮 Algorithm Logic

A **Perfect Number** is a positive integer that is equal to the sum of its positive divisors, excluding the number itself.

The algorithm employs a **Reverse Search Strategy** (Greedy Approach) to optimize finding the "closest" value:

1.  **Input:** Accepts an upper bound integer $N$.
2.  **Reverse Iteration:** Loops from $i = N-1$ down to $1$.
3.  **Validation:** For each $i$, it calculates the sum of proper divisors:
    $$Sum = \sum_{d|i, d<i} d$$
4.  **Check:** If $Sum == i$, the number is Perfect.
5.  **Termination:** The algorithm prints the result and terminates immediately (`break`), ensuring the largest possible value is returned without checking smaller numbers unnecessarily.

### Example Scenario
**Input:** `30`
* Check 29: Not Perfect
* Check 28: Divisors (1, 2, 4, 7, 14) -> Sum = 28 -> **PERFECT!**
**Output:** `sonuc: 28`

## 🚀 Usage

1.  Compile the code:
    ```bash
    gcc main.c -o perfect_search
    ```
2.  Run the executable:
    ```bash
    ./perfect_search
    ```
3.  Enter a number to find the nearest perfect number below it.

---
*This repository demonstrates reverse loop structures and divisor summation logic in C.*
