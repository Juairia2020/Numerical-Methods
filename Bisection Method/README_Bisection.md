# Bisection Method

Bracketing method for finding real roots of nonlinear equations.

## Assumptions
- The function should be continuous over the selected interval.
- The initial interval should bracket a root:
  `f(a) * f(b) < 0`
- Endpoint roots should be handled separately.

## Use Cases
- Reliable real-root finding.
- Problems where derivatives are unavailable.
- Situations where guaranteed convergence is more important than speed.

## Convergence
- Guaranteed when the function is continuous and the initial interval brackets a root.
- Linear convergence.
- The interval width is approximately halved after every iteration.

## Complexity
- Time per iteration: **O(1)** assuming constant-time function evaluation.
- Number of iterations:
  **O(log₂((b-a)/ε))**
- Overall: **O(log((b-a)/ε))**

## Limitations
- Requires a valid bracketing interval.
- Cannot find complex roots.
- Generally slower than faster open methods.
- A root without a sign change may not be detected by the basic bracketing condition.

## Variations
- Adaptive bisection
- Hybrid bisection/Newton methods
- Hybrid bisection/secant methods
