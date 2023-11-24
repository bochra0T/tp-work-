import numpy as np

def readMat(m, r, c):
    for i in range(r):
        for j in range(c):
            m[i,j]= int(input(f" entre les elements  ({i},{j}): "))
def somme(matrix, row):
    s = 0
    for i in range(len(matrix)):
         s = s + matrix[row, i] **2
    return s

n = int(input(" order de matrice  A: "))
a = np.zeros((n, n) , dtype=int) 

print("Enter the elements of A:")
readMat(a, n, n)
print(a)
b=int(input("entre the row nmbr"))
print("La somme des carre de la matrice ",somme(a, b))


for i in range(n):
    a[i, i] = a[i,i] * 3
print(a)

for i in range(n):
    for j in range(i+1, n):
        a[i, j] = 0
print( "A:" , a)