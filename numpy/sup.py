import numpy as np
n = int(input("Enter the order: "))
a = np.zeros((n, n))
for i in range(n):
    for j in range(i, n):
        a[i, j] = float(input(f"Enter the element A[{i},{j}]: "))
y = np.zeros(n)
for i in range(n):
    y[i] = float(input(f"Enter the element Y[{i}]: "))
x = np.zeros(n)
for i in range(n - 1, -1, -1):
    s = 0
    for j in range(i+1 , n-1):
        s += a[i, j] * x[j]
    x[i] = (y[i] - s) / a[i, i]
print("Solution X:")
print(x)

