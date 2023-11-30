import numpy as np

def moy(x, n):
    s = 0
    for i in range(n):
        for j in range(n):
            s = s + x[i, j]
    xbar = s / (n * n)
    return xbar

def sigma(x, xbar, n):
    s = 0
    for i in range(n):
        for j in range(n):
            s += (x[i, j] - xbar) ** 2
    sigma_val = np.sqrt(s / (n * n))
    return sigma_val

n = int(input('Enter n: '))
x = np.zeros((n, n))

for i in range(n):
    for j in range(n):
        x[i, j] = int(input(f'Enter the element of the array x[{i},{j}]: '))

xbar = moy(x, n)
print("The average of x =", xbar)

sigma_val = sigma(x, xbar, n)
print("The value of sigma =", sigma_val)

# 2nd method to calculate sigma
sigma=np.std(x)
print("standard deviation of x = ", sigma)

for i in range (0,n-1,1):
    d=x[i+1] -x[i]
    print('d=',d)