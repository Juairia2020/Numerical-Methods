# Regula Falsi (False Position)

Bracketing method for finding real roots using linear interpolation.

## Diagram

The basic idea is to join the two points `A = (a, f(a))` and `B = (b, f(b))` with a straight line. The point where this line intersects the x-axis is taken as the next approximation `x₀`.

![False Position Method Diagram]()

## Derivation of x₀

Suppose the two initial points are:

`A = (a, f(a))`

`B = (b, f(b))`

The straight line joining these two points intersects the x-axis at:

`X = (x₀, 0)`

Since A, B, and X lie on the same straight line, their slopes are equal.

### Step 1: Equate the Slopes

Using points A and B:

`m_AB = (f(b) - f(a)) / (b - a)`

Using points A and X:

`m_AX = (0 - f(a)) / (x₀ - a)`

Therefore:

`(f(b) - f(a)) / (b - a) = -f(a) / (x₀ - a)`

### Step 2: Cross Multiply

`[f(b) - f(a)](x₀ - a) = -f(a)(b - a)`

### Step 3: Solve for x₀

`x₀ - a = -f(a)(b - a) / [f(b) - f(a)]`

Therefore:

**x₀ = a - f(a)(b - a) / [f(b) - f(a)]**

This can also be written as:

**x₀ = [a f(b) - b f(a)] / [f(b) - f(a)]**

Both formulas are equivalent.

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
