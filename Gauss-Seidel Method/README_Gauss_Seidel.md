# Gauss-Seidel Iteration

Iterative method for solving a system of linear equations using newly calculated values immediately.

## Assumptions
- Number of equations must equal the number of variables.
- Diagonal coefficients must be non-zero.
- Convergence is generally expected for strictly diagonally dominant systems.
- The implementation starts with an initial guess of zero.

## Use Cases
- Linear systems requiring iterative solutions.
- Large or sparse systems.
- Situations where faster practical convergence than Jacobi is desirable.

## Convergence
- Linear convergence when the method converges.
- Usually requires fewer iterations than Jacobi for suitable systems.
- Convergence is not guaranteed for arbitrary systems.

## Complexity
- Time per iteration: **O(n²)**
- Total time for `k` iterations: **O(kn²)**
- Space: **O(n²)**

## Limitations
- May diverge for unsuitable systems.
- Sequential updates make straightforward parallelization difficult.
- Variable or equation ordering can affect convergence.

## Variations
- Successive Over-Relaxation (SOR)
- Symmetric Gauss-Seidel
- Block Gauss-Seidel
