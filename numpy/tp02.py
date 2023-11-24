import numpy as np

# Step 1: Define your coefficient matrix A and the right-hand side vector Y.
A = np.array([[2, 3], [1, -2]])
Y = np.array([8, 1])

# Step 2: Solve the system of equations using the inverse of A.
# Calculate the inverse of A
A_inv = np.linalg.inv(A)

# Solve for X using the inverse method
X_inv = np.dot(A_inv, Y)

# Step 3: Solve the system of equations using numpy.linalg.solve()
X_solve = np.linalg.solve(A, Y)

# Step 4: Check if the two solutions are the same using numpy.allclose()
if np.allclose(X_inv, X_solve):
    print("The solutions using the inverse of A and numpy.linalg.solve() are the same.")
    print("Solution:", X_inv)
else:
    print("The solutions are not the same.")