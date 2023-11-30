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
x_inv=np.linalg.inv(a)
print(x_inv)
x=np.dot(x_inv,y)
print('le vactur 1 methode',x)
#la 2 methode 
x=np.linalg.solve(a,y)
print('le vactur 2 eme methode ',x)

