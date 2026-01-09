# simple claculator

class Calculator:
    def input(self):
        self.x = float(input("Enter a number x:"))
        self.y = float(input("Enter a number y:"))

    def add(self):
        print("Addition:",self.x+self.y)

    def sub(self):
        print("Substraction:",self.x-self.y)

    def mul(self):
        print("Multiplication:",self.x*self.y)

    def div(self):
        print("Division:",self.x/self.y)

c = Calculator()

f = True
while f:
    print("-----------Menu------------\n1->Addition\n2->Substraction\n3->Multiplication\n4->Division\n")
    choice = int(input("Enter your choice:"))
    
    if choice == 1:
        c.input()
        c.add()
    elif choice == 2:
        c.input()
        c.sub()
    elif choice == 3:
        c.input()
        c.mul()
    elif choice == 4:
        c.input()
        c.div()
    else:
        f = False    