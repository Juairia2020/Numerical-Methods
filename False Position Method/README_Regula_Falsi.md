# Regula Falsi (False Position)

Bracketing method for finding real roots using linear interpolation.

## Assumptions
- The function should be continuous over the selected interval.
- The initial interval should bracket a root:
  `f(a) * f(b) < 0`
- Endpoint roots should be handled separately.

## Use Cases
- Real-root finding when a valid bracket must be maintained.
- Problems where derivatives are unavailable.
- Situations where interpolation may provide a better estimate than the midpoint used by bisection.

## Convergence
- Usually linear when it converges.
- Can be faster than bisection for favorable functions.
- May stagnate when one endpoint remains fixed for many iterations.

## Complexity
- Time per iteration: **O(1)** assuming constant-time function evaluation.
- Total time: **O(k)** for `k` iterations.

## Limitations
- Requires a valid bracketing interval.
- Can suffer from endpoint stagnation.
- Cannot find complex roots.
- Performance depends on the shape of the function.

## Variations
- Illinois Method
- Pegasus Method
- Anderson-Björck Method
