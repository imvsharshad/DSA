def pattern1(n):
    for i in range(n):
        for j in range(1, n + 1):
            print(j, end=" ")
        print()
    #  OUTPUT:
    #       1 2 3 4
    #       1 2 3 4
    #       1 2 3 4
    #       1 2 3 4 
    
def pattern2(n):
    for i in range(n):
        ch = 'A'
        for j in range(0, n):
            print(ch, end=" ")
            ch = chr(ord(ch) + 1)
        print()
    #  OUTPUT:
    #       A B C D
    #       A B C D
    #       A B C D
    #       A B C D

def pattern3(n):
    num = 1
    for i in range(n):
        for j in range(0, n):
            print(num, end=" ")
            num += 1
        print()
    #  OUTPUT:
    #       1 2 3
    #       4 5 6
    #       7 8 9
    
def patter4(n):
    char = 'A'
    for i in range (n):
        for j in range(n):
            print(char, end=" ")
            char = chr(ord(char) + 1)
        print()
    #  OUTPUT:
    #       A B C
    #       D E F
    #       G H I
    
def pattern5(n):
    for i in range(n):
        for j in range(0, i+1):
            print("*", end=" ")
        print()
    #  OUTPUT:
    #       * 
    #       * * 
    #       * * * 
    
def pattern6(n):
    for i in range(n):
        for j in range(i+1):
            print(i+1, end=" ")
        print()
    
    #  OUTPUT:
    #       1
    #       2 2 
    #       3 3 3

def pattern7(n):
    ch = 'A'
    for i in range(1, n+1):
        for j in range(i, 0, -1):
            print(ch, end=" ")
        ch = chr(ord(ch) + 1)
        print()
    #  OUTPUT:
    #       A
    #       B B 
    #       C C C    
    
def pattern8(n):
    for i in range(n):
        for j in range(i+1):
            print(j+1, end=" ")
        print()
    
    #  OUTPUT:
    #       1
    #       1 2 
    #       1 2 3    
    
def pattern9(n):
    for i in range(n):
        for j in range (i+1, 0, -1):
            print(j, end=" ")
        print()
    #  OUTPUT:
    #       1
    #       2 1 
    #       3 2 1  
    
def patten10(n):
    num = 1
    for i in range(n):
        for j in range(i+1):
            print(num, end=" ")
            num += 1
        print()
    #  OUTPUT:
    #       1
    #       2 3 
    #       4 5 6 
    
def pattern11(n):
    for i in range(n):
        # spaces
        for j in range(i):
            print(" ", end="")
        # numbers
        for j in range(0,n-i, +1):
            print(i+1, end="")
        print()
    #  OUTPUT:
    #       1 1 1
    #         2 2
    #           3 
    
    # If you are revising this, then try the same pattern with alphabets.

def pattern12(n):
    for i in range(n):
        # spaces
        for j in range(n-i-1):
            print(" ", end="")
            
        # numbers
        for j in range(i+1):
            print(j+1, end="")
        
        # numbers
        for j in range(i, 0, -1):
            print(j, end="")
        print()
        #  OUTPUT:
        #         1
        #        121
        #       12312  
        #      1234123
        

input_number = int(input("Enter a number: "))
# pattern1(input_number)
# pattern2(input_number)
# pattern3(input_number)
# patter4(input_number)
# pattern5(input_number)
# pattern6(input_number)
# pattern7(input_number)
# pattern8(input_number)
# pattern9(input_number)
# patten10(input_number)
# pattern11(input_number)
pattern12(input_number)
