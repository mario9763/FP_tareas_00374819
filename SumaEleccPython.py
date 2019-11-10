'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

'''
cantnum = int(input("Escriba la cantidad de números que quiere sumar: "))

cont=0

for i in range(cantnum):
    suma = int(input("Escriba el número que quiere sumar: "))
    resultado = cont + suma
    cont = resultado
    
print("El resultado es: " + str(resultado))