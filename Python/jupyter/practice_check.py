
####Calculator#####
cal = int(input("Press 1 to Enter the Calculator Menu\n"))
while cal == 1:
    a = float(input("Enter a number a :"))
    b = float(input("Enter a number b :"))
    print("====Operation Menu====")
    print("Enter 1 for Addition\nEnter 2 for Subtraction\nEnter 3 for Multiplication\nEnter 4 for Integer Division\nEnter 5 for Float Division\nEnter 6 for Exponential\n")
    ch = int(input("Enter the operation you want to perform"))
    if 1<=ch<=8:
        if ch == 1:
            print(a+b)
        if ch == 2:
            print(a-b)
        if ch == 3:
            print(a*b)
        if ch == 4:
            print(a//b)
        if ch == 5:
            print(a/b)
        if ch == 6:
            print(a**int(b))
        if ch == 1:
            print(a%b)
        if ch == 2:
            print((a+b)/2)
        
        cal = int(input("Press 1 to continue...\n"))
    else:
        print("Wrong Choice!!!")
# else:
#     print("Thanks!!!")