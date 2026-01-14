# C++ Solutions to Leet Code Problems

## Building

To compile and run a given problem, `cd` into the desired directory, and run

        g++ solution.cpp tests.cpp -o tests && ./tests

## Notes

### Problem 283 - Move Zeros

I initially came up with a very inefficient approach: Whenever a zero in
encounterd, it is erased from the vector, and a zero is pushed to the back.
This is highly inefficeint, due to the large overhead of restructuring the
vector in order to remove an element.

Swapping elements is the way to go here. Took me a while to get my head around
the optimal solution: One pointer `nonZeroTarget` keeps track of the leftmost
position that has been explicitly assigned a non-zero value (starts at `0`).
A second pointer (`scout`) simply increments by `1` each pass. When the element
at `scout` is not `0`, the element is swapped with that at `nonZeroTarget`.

#### Example

    iterate  vector     nonZeroTarget  scout  Notes
    start    1 0 2 0 3  0              0
    0        1 0 2 0 3  1              1      A swap did happen here, element 0 was
                                              swapped with itself!
    1        1 0 2 0 3  1              2      scout was pointing to 0, so nothing is done
    2        1 2 0 0 3  2              3      Non-zero element: swap elements 1
                                              & 2, and increment nonZeroTarget
    3        1 2 0 0 3  2              4
    4        1 2 3 0 0  3              5      scout == nums.size() => terminate
