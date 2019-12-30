from math import sqrt

print("Considere la expresión ax^2+bx+c=0")

while(True):
    try:
        a = float(input("Introduzca el coeficiente de la variable cuadratica 'a': "))
        break
    except:
        print("Introduce un número real")
while(True):
    try:
        b = float(input("Introduzca el coeficiente de la variable lineal 'b' : "))
        break
    except:
        print("Introduce un número real")
while(True):
    try:
        c = float(input("Introduzca el coeficiente de la constante 'c' : "))
        break
    except:
        print("Introduce un número real")

print(f"La expresión es ({a}) X^2 + ({b}) X + {c} = 0")

if b**2 - 4*a*c >= 0:
    if a != 0:
        x1 = (-b + sqrt((b**2) -4*a*c))/(2*a)
        x2 = (-b - sqrt((b**2) -4*a*c))/(2*a)
        print(f"La solución positiva x1 = {x1} \nLa solución negativa x2 = {x2}")
    else:
        if b != 0:
            if c == 0:
                print("La solución es x = 0")
            else:
                x = -c/b
                print(f"La solución es {x}")
        else:
            if c != 0:
                print("La ecuación no tiene solución")
            else: 
                print("La ecuación tiene infinitas soluciones")
else:
    print("La ecuacion no tiene solución perteneciente a los Reales")
