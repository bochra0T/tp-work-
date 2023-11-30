import numpy as np

def readMat(m,n):
    for i in range(n):
        for j in range(n):
            m[i,j]= int(input(f" entre les elements  ({i},{j}): "))
def somme(a, row):
    s = 0
    for i in range(len(a)):
        for j in range(len(a)):
          s = s + a[row, j] **2
    return s

n = int(input(" order de matrice  A: "))
a = np.zeros((n, n) , dtype=int) 

print("Enter the elements of A:")
readMat(a,n)
print(a)
b=int(input("entre the row nmbr"))
print("La somme des carre de la matrice ",somme(a, b))


for i in range(n):
    a[i, i] = a[i,i] * 3
print(a)

for i in range(n):   #inferieur 
    for j in range(i+1, n):
        a[i, j] = 0
print( "A:\n" , a)
for j in range(n):  #superieur
    for i in range(j+1, n):
        a[i, j] = 0
print( "A:\n" , a)
