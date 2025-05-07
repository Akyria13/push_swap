# push_swap

## 🧮 Description

**push_swap** is a 42 school project that consists of sorting a stack of integers using a limited set of operations, with the goal of minimizing the number of instructions.

This project is a great opportunity to deepen your understanding of algorithms, data structures (especially stacks), and how to write efficient code under constraints.

---

## 🎯 Objective

Write a program that receives a list of integers as arguments and sorts them using only the following operations :

- `sa`, `sb`, `ss` – Swap the first 2 elements at the top of a stack.
- `pa`, `pb` – Push the top element from one stack to the top of the other.
- `ra`, `rb`, `rr` – Shifts all the elements of the stack up by one position (the first element becomes the last).
- `rra`, `rrb`, `rrr` – Shifts all elements of the stack down one position (the last element becomes the first).

The output should be the sequence of instructions that will sort the numbers using the smallest number of operations possible.

---

## ⚙️ How it works

- The program uses two stacks : **A** (initial input) and **B** (empty (fill with -1) at the start).
- It must sort **stack A** in ascending order using only the allowed operations.
- For large inputs, a non-comparative algorithm is used: **Radix Sort** (base 2).

---

## 🚀 Features

### ✅ Sorting Algorithms

- **Small stacks (≤ 5 elements)** :
  - Hardcoded and optimized sorting using condition checks.

- **Large stacks (> 5 elements)** :
  - Implemented using **Radix Sort** with binary indexing.
  - Indexing simplifies the sorting process by replacing values with their rank in the sorted array.

### 💡 Indexing System

- All values are first indexed from 0 to N-1 (where N is the number of elements).
- This normalization allows Radix Sort to work efficiently even with negative or large numbers.

### 🛑 Input validation

- Checks for:
  - Non-integer arguments.
  - Invalid characters.
  - Duplicate values.
  - Integer overflow.

---

## 📦 Compilation

```bash
make
./push_swap (your sequence of number)

---

## 📝 Resources

- **`1`** : https://medium.com/nerd-for-tech/push-swap-tutorial-fa746e6aba1e
