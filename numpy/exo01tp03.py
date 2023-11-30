import numpy as np
n=int(input('entrer element'))
x=int(input('entrer element'))
a=np.zeros((n,n))
y=np.zeros(n)
for i in range(n):
    for j in range(n):
        a[i,j]=int(input(f'entrer les elemetes de matrice [{i},{j}]'))
for i in range(n):
        y[i]=int(input(f'entrer les elemetes de vectur [{i}]'))
X=np.zeros(n)
for i in range(n):
    X[i] = y[i] / a[i][i] 
print(X)