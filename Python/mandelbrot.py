from numpy import array, zeros
from matplotlib.pyplot import imshow, xticks, yticks, show

def mandelplot(size, limit, xint, yint):

    img = zeros([size, size], int)

    xamp = xint[1] - xint[0]
    yamp = yint[1] - yint[0]

    for y in range(size):
        for x in range(size):
            c = complex(
                x/float(size)*xamp + xint[0],
                y/float(size)*yamp + yint[0]
            )
            z = c
            for i in range(limit):
                z = z**2 + c
                img[y,x] += 1
                if abs(z) > 2:
                    break
                else:
                    img[y,x] = 0

    img = array(img/float(img.max()))

    asp = yamp/xamp

    imshow(img, interpolation='bilinear',origin='lower',cmap='binary',aspect=asp)

    xticks([])

    yticks([])

    show()

    return

puntos = 1000

limite = 300

xint=[-1.5,1]

yint=[-1.5,1.2]

mandelplot(puntos,limite,xint,yint)