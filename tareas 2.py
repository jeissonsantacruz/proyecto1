import turtle
######____________ este codigo es  de jeisson santacruz ###########
turtle.pencolor("red")
turtle.speed(0)
turtle.shape("turtle")
turtle.pensize(4) # da el grueso del lapiz
D=2 #----------- VARIABLE PARA EL ZOOM
lados = 5
distancia = 10*D
angulo = 72
n=6*D
#ciclo para hacer una parte del exagono
while distancia < 50*D :
    distancia=distancia+n
    turtle.forward(distancia)
    turtle.right(angulo)
#2 parte del laberinto 
turtle.pencolor("red")
turtle.fd(50*D)
turtle.rt(-60)
turtle.fd(20*D)
turtle.rt(-120)
turtle.fd(75*D)
turtle.rt(-72)
turtle.fd(80*D)
turtle.rt(-72)
turtle.fd(75*D)
turtle.rt(-72)
turtle.fd(70*D)
turtle.rt(-72)
turtle.fd(50*D)
turtle.rt(60)
turtle.fd(20*D)
turtle.rt(120)
turtle.fd(75*D)
turtle.rt(72)
turtle.fd(75*D)
turtle.up()
turtle.setpos(-51.5*D,40*D)
turtle.pd()
turtle.fd(20*D)
turtle.rt(72)
#variables del ciclo
lados = 5
distancia = 100*D
angulo = 72
n=6*D
# 3 parte del laberinto   ciclo while
while distancia < 150*D :
    distancia=distancia+n
    turtle.forward(distancia)
    turtle. right(angulo)
turtle.pu()
turtle.fd(20*D)
turtle.pd()
turtle.fd(118*D)
turtle.rt(72)
turtle.fd(20*D)
turtle.pu()
turtle.home()
turtle.fd(-120*D)
turtle.rt(90)
#recoorido de la tortuga
# 2 tortuga  (la tortuga (mujer))
j=turtle.Turtle()
j.shape("turtle")
j.pensize(5)
j.lt(90)
j.fd(10*D)
j.lt(-90)
j.fd(25*D)
j.rt(72)
j.fd(35*D)
j.rt(72)
j.fd(45*D)
j.rt(-58)
j.fd(50*D)
j.rt(130)
j.fd(110*D)
j.rt(72)
j.fd(110*D)
j.rt(72)
j.fd(120*D)
j.rt(72)
j.fd(130*D)
j.rt(72)
j.fd(130*D)
j.rt(72)
j.fd(170*D)

#fin
