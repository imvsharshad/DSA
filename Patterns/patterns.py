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

input_number = int(input("Enter a number: "))
# pattern1(input_number)
# pattern2(input_number)
# pattern3(input_number)
# patter4(input_number)
pattern5(input_number)