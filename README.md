# Push Swap

Push Swap is a sorting algorithm project. The goal is to sort a stack of numbers using a limited set of operations with the fewest moves possible.

## Sorting Algorithm
- **Radix Sort** is used for larger stacks to ensure efficiency.
- A more optimized approach is applied for smaller stacks.

## Allowed Operations
- `sa` / `sb` / `ss` – Swap the first two elements of stack A or B (or both).
- `pa` / `pb` – Push the top element from one stack to the other.
- `ra` / `rb` / `rr` – Rotate stack A or B (or both) upwards.
- `rra` / `rrb` / `rrr` – Rotate stack A or B (or both) downwards.

## How It Works
1. Parse input numbers and check for errors.
2. Use an optimized sorting strategy (Radix Sort for large stacks).
3. Print the list of operations to sort the stack.

## Usage
```sh
./push_swap "4 67 3 87 23"

