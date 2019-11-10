'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

'''
cantnum = int(input("Escriba la cantidad de números que quiere multiplicar: "))

cont=int(input("Escriba el número que quiere multiplicar: "))

for i in range(cantnum-1):
    mult = int(input("Escriba el número que quiere multiplicar: "))
    resultado = cont * mult 
    cont = resultado
    
print("El resultado de la multiplicación es: " + str(resultado))