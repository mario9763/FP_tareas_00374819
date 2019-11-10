'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

'''
cantnum = int(input("Escriba la cantidad de números que quiere dividir al número x: "))

cont=int(input("Escriba el número original (x): "))

for i in range(cantnum):
    divisn = int(input("Escriba el número que quiere dividir: "))
    resultado = cont / divisn 
    cont = resultado
    
print("El resultado de la multiplicación es: " + str(resultado))