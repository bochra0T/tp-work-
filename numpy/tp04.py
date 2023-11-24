import numpy as np
n = int(input("enter the order"))
A= np.zeros((n, n))
for i in range(n):
    for j in range(n):
        A[i, j] = int(input("A["+str(i)+","+str(j)+"] : "))
y = np.zeros(n)
for i in range(n):
    y[i] = int(input("y["+str(i)+"]"))
p=A[0, 0]
for j in range(n):
    A[0,j]=A[0,j]/p
y[0] = y[0] / p
print(A)
print(y)
for i in range(1,n):
    d= A[1,0]
    for j in range(0,n):
        A[i,j]=A[i,j] - d * A[0,j] 
        y[i] = y[i] - d * y[0]
for l in range(n):
    p=A[l,l]
    for j in range(n):
         A[l,j] = A[l,j]/p
    y[l] = y[l] / p
for i in range (1,n):
    d=a[i,l]
    for j in range(n):
        A[i,j]=a[j,j]-d * a[l,j]
    y[i]=y[i]-d *y[l]
print (a)
print (y)



