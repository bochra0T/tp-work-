import numpy as np
n=int(input("Enter the size of the array T: " ))
T=np.zeros(n)
print ("Enter the elements the array T: ")
for i in range (n):
    T[i]= int(input("T["+str(i)+"]: "))
# 1st method to reverse T
for i in range (n//2):
    T[i],T[n-i-1]=T[n-i-1],T[i]
print("T reversed: ", T)
# 2nd method to reverse T
T=np.flip(T)
print("T reversed: ", T)
# 3rd method to reverse T
T=T[::-1]
print("T reversed: ", T)