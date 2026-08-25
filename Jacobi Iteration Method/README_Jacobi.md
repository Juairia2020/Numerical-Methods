# Jacobi Iteration

Iterative method for solving a system of linear equations.

## Assumptions
- Number of equations must equal the number of variables.
- Diagonal coefficients must be non-zero.
- Convergence is generally expected for strictly diagonally dominant systems.
- The implementation starts with an initial guess of zero.

## Use Cases
- Large systems of linear equations.
- Systems where parallel computation is useful.
- Situations where a simple iterative approach is preferred.

## Convergence
- Linear convergence when the method converges.
- Usually slower than Gauss-Seidel.
- Convergence is not guaranteed for arbitrary systems.

## Complexity
- Time per iteration: **O(n²)**
- Total time for `k` iterations: **O(kn²)**
- Space: **O(n²)**

## Limitations
- May diverge for unsuitable systems.
- Can require many iterations.
- Requires a separate vector for newly calculated values.

## Variations
- Weighted Jacobi
- Block Jacobi
- Parallel Jacobi
