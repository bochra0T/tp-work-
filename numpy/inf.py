import numpy as np
n = int(input("Enter the order: "))
a = np.zeros((n, n))
for j in range(n):
    for i in range(j, n):
        a[i, j] = float(input(f"Enter the element A[{i},{j}]: "))
print(a)


