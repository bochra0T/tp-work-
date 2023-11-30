import numpy as np
n = int(input("Enter the size of the matrix: "))

print("Enter the elements of the matrix a:")
a = np.zeros((n, n))
for i in range(n):
    for j in range(n):
        a[i, j] = float(input(f"a[{i},{j}]: "))

l = np.zeros((n, n))
u = np.zeros((n, n))

for i in range(n):
    
    for j in range(i, n):
        s = 0
        for k in range(i):
            s += l[j, k] * u[k, i]
        l[j, i] = a[j, i] - s

    for j in range(i, n):
        s = 0
        for k in range(i):
            s += l[i, k] * u[k, j]
        if l[i, i] == 0:
            print("Error")
           
        u[i, j] = (a[i, j] - s) / l[i, i]

print("\nMatrix a:")
print(a)
print("\nMatrix l:")
print(l)
print("\nMatrix u:")
print(u)