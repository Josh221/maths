from math import sqrt as sqrt

suma = 0
limite = 10000

for valor  in range(1, limite):
    suma = suma + (1/ (valor**2) )

pi = sqrt(suma*6)
print(f" pi (aprox) = {pi}")

