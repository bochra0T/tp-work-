import numpy as np
import numpy as np 
n = int(input("enter the order"))
a = np.zeros((n,n))
for i in range(n):
    a[i,i] = int(input("enter the element "))
print(a)
y = np.zeros(n)
for i in range(n):
    y[i] = int(input("enter the element "))
x =np.zeros(n)
for i in range(n):
    x[i] = y[i] / a[i,i]
print(x)

#triangle inf
import numpy as np
n = int(input("enter the order"))
a = np.zeros((n,n))
for i in range(n):
    for j in range(i+1):
        a[i,j] = float(input("enter the element : "))
y = np.zeros(n)
for i in range(n):
    y[i] = float(input("enter the element :"))
x = np.zeros(n)
for i in range(n):
    s = 0.0
    for j in range(i):
        s+= a[i,j]*x[j]
    x[i]= (y[i] - s)/a[i,j]
print(x)
    