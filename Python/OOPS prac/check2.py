### Result
class Markserror(Exception):
    pass
class Student:
    def Stream(self):
        print("------STREAM------\n101->Science\n102->Commerce\n103->Arts\n")
        self.stream = int(input("Enter your stream ID:"))
        if self.stream in [101,102,103]:
            if self.stream == 101:
                print("STREAM => SCIENCE")
            elif self.stream == 102:
                print("STREAM => COMMERCE")
            else:
                print("STREAM => ARTS")
        else:
            print("Wrong STREAM ID!!!")
            

    def subject(self):
        try:
            self.a = int(input("Number obtained in sub A: "))
            self.b = int(input("Number obtained in sub B: "))
            self.c = int(input("Number obtained in sub C: "))

            if self.a not in range(0, 101):
                raise Markserror("Marks in subject A must be between 0 and 100")
            if self.b not in range(0, 101):
                raise Markserror("Marks in subject B must be between 0 and 100")
            if self.c not in range(0, 101):
                raise Markserror("Marks in subject C must be between 0 and 100")

            print("All marks are valid")
            return True

        except Markserror as me:
            print("Error:", me)
            return False

    def check(self):
        self.total = (self.a+self.b+self.c)
        print(f"Result : {self.total} / 300")

    def grade(self):
        if self.stream == 101:
            if self.total >= 295:
                print("GRADE: A+")
            elif self.total >= 290:
                print("GRADE: A")
            elif self.total >= 280:
                print("GRADE: B")
            elif self.total >= 270:
                print("GRADE: C")
            elif self.total >= 260:
                print("GRADE: D")
            else:
                print("GRADE: F")

        elif self.stream == 102:
            if self.total >= 290:
                print("GRADE: A+")
            elif self.total >= 285:
                print("GRADE: A")
            elif self.total >= 275:
                print("GRADE: B")
            elif self.total >= 255:
                print("GRADE: C")
            elif self.total >= 240:
                print("GRADE: D")
            else:
                print("GRADE: F")

        elif self.stream == 103:
            if self.total >= 280:
                print("GRADE: A+")
            elif self.total >= 260:
                print("GRADE: A")
            elif self.total >= 250:
                print("GRADE: B")
            elif self.total >= 230:
                print("GRADE: C")
            elif self.total >= 220:
                print("GRADE: D")
            else:
                print("GRADE: F")



student = Student()
student.Stream()

if student.stream in [101,102,103]:
    if student.subject():
        student.check()
        student.grade()
    if student.stream == 101:
        if student.total >=260:
            print("Pass")
        else:
            print("F")
    elif student.stream == 102:
        if student.total >=240:
            print("Pass")
        else:
            print("F")
    elif student.stream == 103:
        if student.total >=220:
            print("Pass")
        else:
            print("F")
