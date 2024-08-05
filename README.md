# Push Swap

## Overview

Push Swap is a project from the 42 cursus that challenges students to sort a stack of integers using a limited set of operations and the smallest number of moves possible. The goal is to develop a program that efficiently sorts numbers with the least amount of instructions, focusing on algorithmic thinking and optimization techniques.

## Objective

The primary objective of Push Swap is to sort a stack of integers in ascending order using two stacks and a restricted set of operations. The challenge lies in finding the most efficient sequence of operations to achieve the sorted state with the minimum number of moves.

## Operations

The following operations are allowed in Push Swap:

- `sa`: swap the first 2 elements of stack A. Do nothing if there is only one or no element on the stack.
- `sb`: swap the first 2 elements of stack B. Do nothing if there is only one or no element on the stack.
- `ss`: `sa` and `sb` at the same time.
- `pa`: take the first element from B and put it at the top of A. Do nothing if B is empty.
- `pb`: take the first element from A and put it at the top of B. Do nothing if A is empty.
- `ra`: rotate stack A up by one: The first element becomes the last one.
- `rb`: rotate stack B up by one: The first element becomes the last one.
- `rr`: `ra` and `rb` at the same time.
- `rra`: rotate stack A down by one: The last element becomes the first one.
- `rrb`: rotate stack B down by one: The last element becomes the first one.
- `rrr`: `rra` and `rrb` at the same time.

## How to Run

To run Push Swap, follow these steps:

1. Clone the repository to your local machine.
2. Navigate to the project directory.
3. Compile the project using the Makefile provided.
4. Execute the program with a series of integers as arguments. For example:
   ```
   make
   ./push_swap $(shuf -i 1-100000 | head -n 500 | tr '\n' ' ')
   ```

## Bonus Part

The checker which wait and read instructions on the standard input,  Once all the instructions have been read, checker will execute them on the stack received as an argument .

If after executing those instructions, the numbers are well sorted , then checker must display "OK" else "KO". If checker arguments are invalid it displays Error.

```
make bonus
"$>ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker_OS $ARG
```



