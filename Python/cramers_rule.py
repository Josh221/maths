while True:
    x = int(input("""
    \n Resolver sistema:
    \n { 1 } -- 2x2
    \n { 2 } -- 3x3
    \nintroduce:"""))

    if x == 1:
        print("""Considera el sistema de la forma
        Ax+By=C
        Dx+Ey=F""")

        A = float(input("Introduce el coeficiente A = "))
        B = float(input("Introduce el coeficiente B = "))
        C = float(input("Introduce el coeficiente C = "))

        D = float(input("Introduce el coeficiente D = "))
        E = float(input("Introduce el coeficiente E = "))
        F = float(input("Introduce el coeficiente F = "))

        print(f"""Sistema a resolver
        ({A})x+({B})y=({C})
        ({D})x+({E})y=({F})""")

        det = A*E - B*D

        if det != 0:
            x = (C*E - B*F)/(det)
            y = (A*F - C*D)/(det)
            print(f"x = {x} and y = {y}")
        else:
            print(f"No puede aplicarse la regla de Cramer, determinante = {det}")
        
        break


    elif x == 2:
        print("""Considera el sistema de la forma
        Ax+By+Cz=k1
        Dx+Ey+Fz=k2
        Gx+Hy+Iz=k3""")

        A = float(input("Introduce el coeficiente A = "))
        B = float(input("Introduce el coeficiente B = "))
        C = float(input("Introduce el coeficiente C = "))
        K1 = float(input("Introduce el coeficiente K1 = "))

        D = float(input("Introduce el coeficiente D = "))
        E = float(input("Introduce el coeficiente E = "))
        F = float(input("Introduce el coeficiente F = "))
        K2 = float(input("Introduce el coeficiente K2 = "))

        G = float(input("Introduce el coeficiente G = "))
        H = float(input("Introduce el coeficiente H = "))
        I = float(input("Introduce el coeficiente I = "))
        K3 = float(input("Introduce el coeficiente K3 = "))

        print(f"""Sistema a resolver
        ({A})x+({B})y+({C})z=({K1})
        ({D})x+({E})y+({F})z=({K2})
        ({G})x+({H})y+({I})z=({K3})""")

        det = A*(E*I - F*H)-B*(D*I - F*G)+C*(D*H - E*G)

        if det != 0:
            x = (K1*(E*I - F*H)-B*(K2*I - F*K3)+C*(K2*H - E*K3))/(det)
            y = (A*(K2*I - F*K3)-K1*(D*I - F*G)+C*(D*K3 - K2*G))/(det)
            z = (A*(E*K3 - K2*H)-B*(D*K3 - K2*G)+K1*(D*H - E*G))/(det)
            print(f" x = {x} , y = {y} and z = {z} ")
        else:
            print(f"No se puede aplicar la regla de Cramer, determinante = {det}")

        break
    
    else:
        pass