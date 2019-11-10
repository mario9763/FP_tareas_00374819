'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

'''
cantnum = int(input("Escriba la cantidad de números que quiere restar: "))

primnum = int(input("Escriba el primer número: "))

cont=primnum

for i in range(cantnum-1):
    resta = int(input("Escriba el número que quiere restar: "))
    resultado = cont - resta
    cont = resultado
    
print("El resultado de la resta es: " + str(resultado))