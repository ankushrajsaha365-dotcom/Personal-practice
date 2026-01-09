class Student:
    def stream_input(self):
        print("------ STREAM ------")
        print("101 -> Science")
        print("102 -> Commerce")
        print("103 -> Arts")

        self.stream = int(input("Enter your stream ID: "))

        if self.stream == 101:
            print("STREAM => SCIENCE")
        elif self.stream == 102:
            print("STREAM => COMMERCE")
        elif self.stream == 103:
            print("STREAM => ARTS")
        else:
            print("Wrong STREAM ID!!!")

    def subject(self):
        self.a = int(input("Marks in sub A: "))
        self.b = int(input("Marks in sub B: "))
        self.c = int(input("Marks in sub C: "))

    def check(self):
        self.total = self.a + self.b + self.c
        print(f"Result: {self.total} / 300")

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
student.stream_input()

if student.stream in [101, 102, 103]:
    student.subject()
    student.check()
    student.grade()
else:
    print("Program terminated.")
